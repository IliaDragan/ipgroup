<?php
/**
 * @file
 * Employees list simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="department-employees-list">
  <?php if (!empty($title)): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
  <div  class="employees-wrapper">
    <?php foreach ($rows as $id => $row): ?>
      <div class="<?php print empty($classes_array[$id]) ? 'views-row' : $classes_array[$id]; ?>">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
