<?php
/**
 * @file
 * Overrides front page slideshow css block result - double items for animation.
 */

?>
<?php $items = ''; ?>
<?php print $wrapper_prefix; ?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php print $list_type_prefix; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php $items .= "<li>$row</li>\n"; ?>
<?php endforeach; ?>
<?php print $items . $items; ?>
<?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; ?>
