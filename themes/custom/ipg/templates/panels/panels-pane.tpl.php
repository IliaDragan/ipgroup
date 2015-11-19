<?php
/**
 * @file
 * Overrides main panel pane template
 *
 * @see panels-pane.tpl.php
 */
?>
<section class="<?php print $classes; ?>" <?php print $id; ?>>
  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <?php if ($title): ?>
    <h2 class="pane-title"><?php print t($title); ?></h2>
  <?php endif; ?>

  <?php if ($feeds): ?>
    <div class="feed">
      <?php print $feeds; ?>
    </div>
  <?php endif; ?>

  <div class="pane-content">
    <?php print render($content); ?>
  </div>

  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="more-link">
      <?php print $more; ?>
    </div>
  <?php endif; ?>
</section>
