<?php

/**
 * @file
 * Default theme implementation to display a project node.
 */
?>
<article<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php print render($title_suffix); ?>
  <div<?php print $content_attributes; ?>>
    <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </div>
</article>
