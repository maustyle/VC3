; Use this file to build a full distribution including Drupal core and the
; Openhotel install profile using the following command:
;
; drush make distro.make <target directory>

api = 2
core = 7.x

; includes[] = drupal-org-core.make

projects[drupal][type] = core
projects[drupal][version] = 7.21

; Add Opendeals to the full distribution build.
projects[openhotel][type] = profile
;projects[openhotel][version] = 1.x-dev
projects[openhotel][download][type] = git
projects[openhotel][download][url] = https://github.com/maustyle/VC3.git
projects[openhotel][download][branch] = vc3

