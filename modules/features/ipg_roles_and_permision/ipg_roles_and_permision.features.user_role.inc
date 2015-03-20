<?php
/**
 * @file
 * ipg_roles_and_permision.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ipg_roles_and_permision_user_default_roles() {
  $roles = array();

  // Exported role: Employee.
  $roles['Employee'] = array(
    'name' => 'Employee',
    'weight' => 3,
  );

  return $roles;
}
