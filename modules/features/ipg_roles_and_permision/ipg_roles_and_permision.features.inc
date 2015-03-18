<?php
/**
 * @file
 * ipg_roles_and_permision.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_roles_and_permision_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
