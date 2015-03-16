core = 7.x
api = 2


projects[devel][subdir] = contrib
projects[devel][download][type] = "git"
projects[devel][download][url] = "http://git.drupal.org/project/devel.git"
projects[devel][download][tag] = "7.x-1.5"

projects[views][subdir] = contrib
projects[views][download][type] = "git"
projects[views][download][url] = "http://git.drupal.org/project/views.git"
projects[views][download][tag] = "7.x-3.10"
projects[views][patch][] = "https://www.drupal.org/files/views-search_handler_argument_undefined_property-1785224-4.patch"
