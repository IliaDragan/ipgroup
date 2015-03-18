<?php
/**
 * @file
 * ipg_roles_and_permision.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ipg_roles_and_permision_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Employer' => 'Employer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Employer' => 'Employer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Employer' => 'Employer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
