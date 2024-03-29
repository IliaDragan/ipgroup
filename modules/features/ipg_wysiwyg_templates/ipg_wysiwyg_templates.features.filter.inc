<?php
/**
 * @file
 * ipg_wysiwyg_templates.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ipg_wysiwyg_templates_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG+.
  $formats['wysiwyg_'] = array(
    'format' => 'wysiwyg_',
    'name' => 'WYSIWYG+',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
