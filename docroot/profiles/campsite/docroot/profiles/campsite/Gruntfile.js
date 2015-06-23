/* global module */
/* global process */
/* global require */
/* global global */

global.drupalRoot = function() {
  'use strict';

  var path = require('path');
  var grunt = require('grunt');

  if (grunt.file.exists('../../includes/bootstrap.inc')) {
    var root = path.resolve('../..');
    return root;
  }
  return null;
};

module.exports = function(grunt) {
  grunt.file.delete('build/reports');
  grunt.file.mkdir('build/reports');

  var env = grunt.option('env') || 'local';

  var envOptions = {
    local: {
      phpcs: {
        report: 'full',
        reportFile: ''
      },
      coder: {
        extraOptions: [],
        output: ''
      },
      phpDebug: {
        logFile: '',
        logFormat: 'console'
      },
      jsDebug: {
        logFile: '',
        logFormat: 'console'
      }
    },
    ci: {
      phpcs: {
        report: 'checkstyle',
        reportFile: 'build/reports/phpcs.checkstyle.xml'
      },
      coder: {
        extraOptions: [
          '--checkstyle'
        ],
        output: '> build/reports/coder.checkstyle.xml'
      },
      phpDebug: {
        logFile: 'build/reports/php.debug.txt',
        logFormat: 'text'
      },
      jsDebug: {
        logFile: 'build/reports/js.debug.txt',
        logFormat: 'text'
      }
    }
  };
  var options = envOptions[env];

  var files = {
    php: {
      default: [
        "**/*.inc",
        "**/*.install",
        "**/*.module",
        "**/*.php",
        "**/*.profile",
        "!**/*.features.*",
        "!**/*.field_group.inc",
        "!**/*.pages_default.inc",
        "!**/*.strongarm.inc",
        "!**/*.views_default.inc",
        "!node_modules/**"
      ],
      phpcs: {
        extensions: "install,inc,module,php,profile",
        ignore: "node_modules,*.features.*,*.field_group.inc,*.pages_default.inc,*.strongarm.inc,*.views_default.inc"
      }
    },
    js: {
      default: [
        "**/*.js",
        "!node_modules/**",
        "!themes/*/lib/**"
      ]
    }
  };

  var debugFound = function(matches) {
    if (matches.numMatches > 0) {
      var msg = matches.numMatches + " debug message(s) found!!!";
      grunt.log.warn(msg);
      if (env == 'ci') {
        grunt.log.warn('JENKINS: MARK BUILD AS UNSTABLE');
      }
    }
  };

  grunt.initConfig({
    pkg: grunt.file.readJSON("package.json"),

    phplint: {
      files: files.php.default
    },

    phpcs: {
      application: {
        dir: files.php.default
      },
      options: {
        standard: "Drupal",
        ignore: files.php.phpcs.ignore,
        extensions: files.php.phpcs.extensions,
        ignoreExitCode: true,
        report: options.phpcs.report,
        reportFile: options.phpcs.reportFile
      }
    },

    search: {
      phpDebug: {
        files: {
          src: files.php.default
        },
        options: {
          searchString: /var_dump\(|dsm\(|dpm\(|kpr\(/g,
          logFormat: options.phpDebug.logFormat,
          logFile: options.phpDebug.logFile,
          onComplete: function(matches) {debugFound(matches)}
        }
      },
      jsDebug: {
        files: {
          src: files.js.default
        },
        options: {
          searchString: /console\.log\(|console\.table\(|console\.trace\(/g,
          logFormat: options.jsDebug.logFormat,
          logFile: options.jsDebug.logFile,
          onComplete: function(matches) {debugFound(matches)}

        }
      }
    },

    shell: {
      drushCoder: {
        options: {
          stdout: true,
          stderr: true
        },
        command: function() {
          var drushCommandBase = "drush --root='/tmp' -v coder";
          var coderOptions = [
            "--no-empty",
            "--ignorename",
            "--ignore",
            "--minor",
            "--security",
            "--sql"
          ];
          coderOptions = coderOptions.concat(options.coder.extraOptions).join(' ');

          var fileList = grunt.file.expand(files.php.default).join(' ');

          return drushCommandBase + " " + coderOptions + " " + fileList + " " + options.coder.output;
        }
      },
      drushMake: {
        options: {
          stdout: true,
          stderr: true
        },
        command: function() {
          var drushCommandBase = "drush --root='/tmp' -v make";
          var makeOptions = [
            "--working-copy",
            "--no-gitinfofile",
            "-y"
          ];
          makeOptions = makeOptions.join(' ');

          var makeProject = grunt.option('project') || '<%= pkg.name %>';
          var makeFile = makeProject + ".make";

          var makeDestination = grunt.option('destination') || ("/tmp/" + makeProject);

          return drushCommandBase + " " + makeOptions + " " + makeFile + " " + makeDestination;
        }
      },
      drushSiteInstall: {
        options: {
          stdout: true,
          stderr: true
        },
        command: function() {
          var lang = grunt.option('lang') || 'en';
          var drushCommandBase = "drush -v site-install";
          var installOptions = [
            "-y",
            "--account-mail=not@integralvision.hu",
            "--site-mail=not@integralvision.hu",
            "--sites-subdir=default",
            "--site-name='<%= pkg.description %>'",
            "<%= pkg.name %>"
          ];
          installOptions = installOptions.join(' ');

          return drushCommandBase + " " + installOptions;
        }
      },
      installDev: {
        options: {
          stdout: true,
          stderr: true
        },
        command: function() {
          var uri = grunt.option('uri') | '<%= pkg.name %>.loc';

          var drushCommandBase = "drush -v";

          var modules = [
            "en",
            "-y",
            "devel",
            "devel_generate",
            "diff",
            "feeds_ui",
            "views_ui"
          ].join(' ');

          var revert = [
            "features-revert-all",
            "-y"
          ].join(' ');

          var upwd = [
            "upwd",
            "admin",
            "--password=1234"
          ].join(' ');

          var environment = [
            "vset",
            "previon_environment",
            uri
          ].join(' ');

          var cc = [
            "cc",
            "all"
          ].join(' ');

          var uli = [
            "--uri=" + uri,
            "uli"
          ].join(' ');

          var commands = [];
          commands.push(drushCommandBase + " " + modules);
          commands.push(drushCommandBase + " " + cc);
          commands.push(drushCommandBase + " " + revert);
          commands.push(drushCommandBase + " " + upwd);
          commands.push(drushCommandBase + " " + environment);
          commands.push(drushCommandBase + " " + cc);
          commands.push(drushCommandBase + " " + uli);

          return commands.join(' && ');
        }
      },
      drushImport: {
        options: {
          stdout: true,
          stderr: true
        },
        command: function() {
          var drupalRootPath = global.drupalRoot();
          var commands = [
            "cd " + drupalRootPath,
            'drush cc all'
          ];
          var drushCommandBase = "drush feeds-import";
          var imports = grunt.config.data.pkg.import || [];
          if (imports.length) {
            for (var i = 0; i < imports.length; i++) {
              var imp = imports[i];
              if (!imp.importer || !imp.file) {
                continue;
              }
              commands.push(drushCommandBase + ' ' + imp.importer + ' --file=' + imp.file);
            }
          }
          return commands.join(' && ');
        }
      },
      switchRootDir: {
        options: {
          stdout: true
        },
        command: function() {
          var src = grunt.option('src');
          if (!src) {
            grunt.fail.fatal("Source isn't defined.");
          }
          var drupalRootPath = global.drupalRoot();
          var bak = drupalRootPath + ".bak";

          var commands = [
            "cp -v " + drupalRootPath + "/.htaccess* " + src + "/",
            "cp -v " + drupalRootPath + "/sites/default/settings.php " + src + "/sites/default/",
            "mv -v " + drupalRootPath + " " + bak,
            "mv -v " + src + " " + drupalRootPath
          ];
          return commands.join(' && ');
        }
      },
      npmInstall: {
        options: {
          stdout: true
        },
        command: function() {
          var drupalRootPath = global.drupalRoot();
          var commands = [
            "cd " + drupalRootPath + "/profiles/<%= pkg.name %>",
            "npm install"
          ];
          return commands.join(' && ');
        }
      }
    },

    compass: {
      dist: {
        options: {
          config: '<%= pkg.themePath %>/config.rb',
          basePath: '<%= pkg.themePath %>'
        }
      }
    }
  });

  grunt.loadNpmTasks("grunt-phplint");
  grunt.loadNpmTasks("grunt-phpcs");
  grunt.loadNpmTasks("grunt-search");
  grunt.loadNpmTasks("grunt-shell");
  grunt.loadNpmTasks("grunt-contrib-compass");

  grunt.registerTask("default", "check");

  grunt.registerTask("check", "Full style check.", [
    "phplint",
    "search:phpDebug",
    "search:jsDebug",
    "phpcs",
    "shell:drushCoder"
  ]);

  grunt.registerTask("cssCompile", "compass");

  grunt.registerTask("make", "shell:drushMake");

  grunt.registerTask("installBase", "shell:drushSiteInstall");

  grunt.registerTask("devSetup", "", "shell:installDev");

  grunt.registerTask("installDev", "Rebuilds the whole project", function() {
    grunt.task.run("installBase");
    if (grunt.option("dev")) {
      grunt.task.run("devSetup");
    }
  });

  grunt.registerTask("install", "installDev");

  grunt.registerTask("import", "shell:drushImport");

  grunt.registerTask("rebuild", "Rebuilds the whole project", function() {
    var drupalRootPath = global.drupalRoot();
    if (!drupalRootPath) {
      grunt.fail.fatal("Drupal is not built.");
    }
    var tmpDestination = drupalRootPath + '.build';
    grunt.option('destination', tmpDestination);
    grunt.task.run('make');
    grunt.option('src', tmpDestination);
    grunt.task.run('shell:switchRootDir');
    grunt.task.run('shell:npmInstall');
    grunt.option('dev', true);
    grunt.task.run('install');
    grunt.task.run('import');
  });

};
