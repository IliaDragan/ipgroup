<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <span class="field__label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</span>
  <?php endif; ?>
    <?php foreach ($items as $delta => $item): ?>
      <?php print render($item); ?>
    <?php endforeach; ?>
</div>
