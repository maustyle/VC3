; Open Hotel make file
core = "7.x"
api = "2"
; comment this in to use in local development
; includes[] = drupal-org-core.make

; Modules
projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[commerce][version] = "1.4"
projects[commerce][subdir] = "contrib"

projects[commerce_google_analytics][version] = "1.0-rc2"
projects[commerce_google_analytics][subdir] = "contrib"

projects[field_redirection][version] = "2.5"
projects[field_redirection][subdir] = "contrib"

projects[ccl][version] = "1.5"
projects[ccl][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc2"
projects[profiler_builder][subdir] = "contrib"

projects[features][version] = "1.0"
projects[features][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[features_extra][version] = "1.0-alpha1"
projects[features_extra][subdir] = "contrib"

projects[ftools][version] = "1.6"
projects[ftools][subdir] = "contrib"

projects[addressfield][version] = "1.0-beta3"
projects[addressfield][subdir] = "contrib"

projects[link][version] = "1.0"
projects[link][subdir] = "contrib"

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"

projects[cs_adaptive_image][version] = "1.0-alpha2"
projects[cs_adaptive_image][subdir] = "contrib"

; projects[l10n_update][version] = "1.0-beta3"
; projects[l10n_update][subdir] = "contrib"

projects[i18n][version] = "1.7"
projects[i18n][subdir] = "contrib"

projects[languageicons][version] = "1.0"
projects[languageicons][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[colorbox][version] = "1.4"
projects[colorbox][subdir] = "contrib"

projects[entity][version] = "1.0-rc3"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.0"
projects[libraries][subdir] = "contrib"

projects[module_filter][version] = "1.7"
projects[module_filter][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[rooms][version] = "1.0-beta4"
projects[rooms][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[google_analytics][version] = "1.3"
projects[google_analytics][subdir] = "contrib"

projects[omega_tools][version] = "3.0-rc4"
projects[omega_tools][subdir] = "contrib"

projects[variable][version] = "2.1"
projects[variable][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_slideshow][version] = "3.0"
projects[views_slideshow][subdir] = "contrib"

projects[webform][version] = "3.18"
projects[webform][subdir] = "contrib"

projects[context][version] = "3.0-beta4"
projects[context][subdir] = "contrib"

; Themes
projects[omega][type] = "theme"
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"

; Libraries
libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][type] = "library"
libraries[fullcalendar][destination] = "libraries"
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.4.zip"

libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][download][type] = git
libraries[flexslider][destination] = "libraries"
libraries[flexslider][download][url] = git://github.com/woothemes/FlexSlider.git

libraries[markitup][download][type] = git
libraries[markitup][download][url] = git://github.com/jackmoore/colorbox.git
libraries[markitup][download][tag] = 1.4.4
libraries[markitup][destination] = "libraries"

libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"
libraries[jquery.cycle][destination] = "libraries"
libraries[jquery.cycle][download][type] = "get"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"
