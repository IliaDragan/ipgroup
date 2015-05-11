<?php
/**
 * @file
 * localization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function localization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
