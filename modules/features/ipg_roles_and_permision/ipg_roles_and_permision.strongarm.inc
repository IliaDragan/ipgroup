<?php
/**
 * @file
 * ipg_roles_and_permision.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ipg_roles_and_permision_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_employer';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_employer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  return $export;
}
