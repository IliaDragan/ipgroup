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

  // Exported permission: 'access Employee profiles'.
  $permissions['access Employee profiles'] = array(
    'name' => 'access Employee profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'view_profiles_perms',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Employee' => 'Employee',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Employee' => 'Employee',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Employee' => 'Employee',
    ),
    'module' => 'node',
  );

  return $permissions;
}
