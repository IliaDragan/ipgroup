<?php
/**
 * @file
 * ipg_contacts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ipg_contacts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
