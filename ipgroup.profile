<?php
/**
 * @file
 * Enables modules and site configuration for a IPGroup site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function ipgroup_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  // Pre-populate site name and site e-mail.
  $form['site_information']['site_name']['#default_value'] = 'IPGroup';
  $form['site_information']['site_mail']['#default_value'] = 'mail@ipgroup.md';

  // Pre-populate site with admin account.
  $pass = 'IPGadmin123!';
  $form['admin_account']['#description'] = st('Site admin password will be <b>%pass</b>. Do not forget it.', array('%pass' => $pass));
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['pass']['#type'] = 'value';
  $form['admin_account']['account']['pass']['#value'] = $pass;

  // Pre-populate site with server settings.
  $form['server_settings']['site_default_country']['#value'] = 'MD';
  $form['server_settings']['date_default_timezone']['#value'] = 'Europe/Chisinau';

  // Pre-populate site with update status.
  $form['update_notifications']['update_status_module']['#value'] = 0;
}