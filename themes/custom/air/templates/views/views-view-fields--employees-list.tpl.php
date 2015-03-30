<?php

/**
 * @file
 * Employees list view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 * - $picture: The user picture link.
 *
 * @ingroup views_templates
 */
?>
<div>
  <?php if (!empty($picture)): ?>
    <div class="views-field views-field-picture">
      <div class="field-content">
        <div class="user-picture">
          <?php print $picture; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>
  <?php if (!empty($fields['field_name']->content)): ?>
    <?php print $fields['field_name']->wrapper_prefix; ?>
    <?php print $fields['field_name']->label_html; ?>
    <?php print $fields['field_name']->content; ?>
    <?php print $fields['field_name']->wrapper_suffix; ?>
  <?php endif; ?>
  <?php if (!empty($fields['field_position']->content)): ?>
    <?php print $fields['field_position']->wrapper_prefix; ?>
    <?php print $fields['field_position']->label_html; ?>
    <?php print $fields['field_position']->content; ?>
    <?php print $fields['field_position']->wrapper_suffix; ?>
  <?php endif; ?>
  <?php if (!empty($fields['field_phone']->content)): ?>
    <?php print $fields['field_phone']->wrapper_prefix; ?>
    <?php print $fields['field_phone']->label_html; ?>
    <?php print $fields['field_phone']->content; ?>
    <?php print $fields['field_phone']->wrapper_suffix; ?>
  <?php endif; ?>
  <?php if (!empty($fields['mail']->content)): ?>
    <?php print $fields['mail']->wrapper_prefix; ?>
    <?php print $fields['mail']->label_html; ?>
    <?php print $fields['mail']->content; ?>
    <?php print $fields['mail']->wrapper_suffix; ?>
  <?php endif; ?>
</div>
