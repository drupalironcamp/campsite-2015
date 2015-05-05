'use strict';

// # Globbing
// for performance reasons we're only matching one level down:
// 'test/spec/{,*/}*.js'
// use this if you want to recursively match all subfolders:
// 'test/spec/**/*.js'

module.exports = function (grunt) {

  // Load grunt tasks automatically
  require('load-grunt-tasks')(grunt);

  // Time how long tasks take. Can help when optimizing build times
  require('time-grunt')(grunt);


  // Define the configuration for all the tasks
  grunt.initConfig({


    // Watches files for changes and runs tasks based on the changed files
    watch: {
      js: {
        files: ['./scripts/{,*/}*.js'],
        tasks: ['jshint'],
      },
      styles: {
        files: ['less/{,*/}*.less'],
        tasks: ['less'],
        options: {
          spawn: false,
        },
    },
      graphics: {
        files: ['./svg/files/*.svg'],
        tasks: ['svgmin','grunticon']
      }
    },

    // compile LESS files
    less: {
        development: {
            files: {
                'css/style.css': ['less/style.less']
            }
        }
    },

    // Make sure code styles are up to par and there are no obvious mistakes
    jshint: {
      options: {
        jshintrc: '.jshintrc',
      },
      all: ['js/{,*/}*.js']
    },




    //Add vendor prefixed styles
    autoprefixer: {
      options: {
        browsers: ['last 5 version', 'ie 8', 'ie 9'], // @see: https://github.com/ai/autoprefixer#browsers
      },
      dist: {
        files: [{
          expand: true,
          src: './css/{,*/}*.css',
        }]
      }
    },


    // minify images
    imagemin: {
      pngfallbacks:{
        files: [{
            expand: true,
            cwd: './svg/png',
            src: '{,*/}*.{png,jpg,jpeg,gif}',
            dest: './svg/png'
         }]
        },
    },

    // svgmin
    svgmin: {
        dist: {
            files: [{
                expand: true,
                cwd: 'svg/files',
                src: ['*.svg'],
                dest: 'svg/files'
            }]
        }
    },


    //svgs
    grunticon: {
        icons: {
            files: [{
                expand: true,
                cwd: './svg/files',
                src: ['*.svg', '*.png'],
                dest: "svg"
            }],
            options: {
                enhanceSVG: true,
                cssprefix: ".svg-",
                customselectors: {
                 "breadcrumb": [".breadcrumb > .first > a:before"],
                 "arrow-2": [".read-more:before"],
                 "arrow-white": [".read-more:hover:before"],
               }
            }
        }
    },

    // glyphs
    webfont: {
      icons: {
          src: 'svg/glyphs/*.svg',
          dest: 'fonts/glyphs',
          destCss: 'less/components/',
          options: {
            stylesheet: 'less',
            font: 'iron-glyphs',
            relativeFontPath: '../fonts/glyphs',
            htmlDemo: false,
            engine: 'node',
            templateOptions: {
                baseClass: 'glyph',
                classPrefix: 'glyph-',
                mixinPrefix: 'glyph-mix-'
            }
          }
      }
    }


  });

  grunt.registerTask('start', [
    'less',
    'jshint',
    'svgmin',
    'grunticon',
    'watch'
  ]);

  grunt.registerTask('build', [
    'webfont',
    'less',
    'autoprefixer',
    'svgmin',
    'grunticon',
    'imagemin'
  ]);

  grunt.registerTask('default', [
    'build'
  ]);


};
