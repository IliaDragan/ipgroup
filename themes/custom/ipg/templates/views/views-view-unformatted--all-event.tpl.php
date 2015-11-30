<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 */

?>
<div class="events-filter">
  <div id="events-filter-technical" class="events-filter-button active">
    <div class="info"><?php print t('Technical events'); ?></div>
  </div>
  <div class="events-filter-separator">||</div>
  <div id="events-filter-corporative" class="events-filter-button active">
    <div class="info"><?php print t('Corporate events'); ?></div>
  </div>
</div>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>

