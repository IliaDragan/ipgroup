<?php
/**
 * @file
 * ipg_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ipg_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
