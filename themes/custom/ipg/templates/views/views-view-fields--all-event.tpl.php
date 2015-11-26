<?php
/**
* @file
* Default simple view template to all the fields as a row.
*/
?>
<?php if (!empty($fields['field_image'])): ?>
  <?php print $fields['field_image']->wrapper_prefix; ?>
  <?php print $fields['field_image']->label_html; ?>
  <?php print $fields['field_image']->content; ?>
  <?php print $fields['field_image']->wrapper_suffix; ?>
<?php endif; ?>
<div class="right-fields">
  <?php if (!empty($fields['field_date'])): ?>
    <?php print $fields['field_date']->wrapper_prefix; ?>
    <?php print $fields['field_date']->label_html; ?>
    <?php print $fields['field_date']->content; ?>
    <?php print $fields['field_date']->wrapper_suffix; ?>
  <?php endif; ?>
  <?php if (!empty($fields['title'])): ?>
    <?php print $fields['title']->wrapper_prefix; ?>
    <?php print $fields['title']->label_html; ?>
    <?php print $fields['title']->content; ?>
    <?php print $fields['title']->wrapper_suffix; ?>
  <?php endif; ?>
  <?php if (!empty($fields['body'])): ?>
    <?php print $fields['body']->wrapper_prefix; ?>
    <?php print $fields['body']->label_html; ?>
    <?php print $fields['body']->content; ?>
    <?php print $fields['body']->wrapper_suffix; ?>
  <?php endif; ?>
</div>
