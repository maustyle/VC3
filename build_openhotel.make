; Use this file to build a full distribution including Drupal core and the
; Openhotel install profile using the following command:
;
; drush make distro.make <target directory>

api = 2
core = 7.16

includes[] = drupal-org-core.make

; Add Opendeals to the full distribution build.
projects[openhotel][type] = profile
projects[openhotel][version] = 1.x-dev
projects[openhotel][download][type] = git
projects[openhotel][download][url] = http://git.drupal.org/project/openhotel.git
projects[openhotel][download][branch] = 7.x-1.x