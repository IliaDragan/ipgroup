<?php
/**
 * @file
 * ipg_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ipg_users_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avatar|user|user|form';
  $field_group->group_name = 'group_avatar';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avatar',
    'weight' => '4',
    'children' => array(
      0 => 'field_photo',
      1 => 'field_caricature',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Avatar',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-avatar field-group-fieldset',
        'description' => 'Upload your photo and caricature.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_avatar|user|user|form'] = $field_group;

  return $export;
}
