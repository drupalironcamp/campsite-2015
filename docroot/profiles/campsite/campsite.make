api = 2
core = 7.x

; Drupal core
projects[drupal][type] = core
projects[drupal][version] = 7.34

defaults[projects][subdir] = contrib

; Campsite profile
projects[campsite_profile][type] = profile
projects[campsite_profile][download][type] = git
projects[campsite_profile][download][url] = git@github.com:drupalironcamp/campsite-2015.git
projects[campsite_profile][download][branch] = dev
projects[campsite_profile][directory_name] = campsite
projects[campsite_profile][subdir] = ""

; Contrib modules
projects[admin_menu][version] = 3.0-rc5
projects[ckeditor][version] = 1.16
projects[ctools][version] = 1.6
projects[entity][version] = 1.5
projects[entityreference][version] = 1.1
projects[features][version] = 2.3
projects[google_analytics][version] = 2.0
projects[jquery_update][version] = 2.4
projects[libraries][version] = 2.2
projects[module_filter][version] = 2.0-alpha2
projects[pathauto][version] = 1.2
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[transliteration][version] = 3.2
projects[views][version] = 3.8

; Theme
projects[bootstrap][version] = 3.0

libraries[respond][download][type] = "get"
libraries[respond][download][url] = "https://github.com/scottjehl/Respond/archive/master.zip"
libraries[respond][destination] = "../../profiles/campsite/themes/campsite_theme/lib"

; Bootstrap 3.2.0 Sass port.
libraries[bootstrap_sass][download][type] = git
libraries[bootstrap_sass][download][url] = https://github.com/twbs/bootstrap-sass.git
libraries[bootstrap_sass][download][revision] = a5f5954268779ce0faf7607b3c35191a8d0fdfe6

; Libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0/ckeditor_4.0_standard.tar.gz"
