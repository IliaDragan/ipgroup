<?php
/**
 * @file
 * ipg_front_page_slideshow_.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ipg_front_page_slideshow__strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
