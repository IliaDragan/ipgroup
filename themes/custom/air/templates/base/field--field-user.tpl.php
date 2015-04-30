<?php
/**
 * @file
 * Default theme implementation for user refernce field.
 */
?>

<div class="team-members">
  <?php foreach ($items as $item): ?>
  <div class="team-member" id="<?php print $item['identifier']; ?>">
    <?php if (!empty($item['name_link'])): ?>
    <div class="team-member-field-name">
      <?php print $item['name_link']; ?>
    </div>
    <?php endif; ?>
    <?php if (!empty($item['position'])): ?>
    <div class="team-member-field-position">
      <?php print $item['position']; ?>
    </div>
    <?php endif; ?>
  </div>
  <?php endforeach; ?>
  <div class="team-members-info hidden">
    <?php foreach ($items as $item): ?>
    <div class="team-member-info  <?php print $item['identifier']; ?> hidden">
      <?php if (!empty($item['photo'])): ?>
      <div class="team-member-photo">
        <?php print $item['photo']; ?>
      </div>
      <?php endif; ?>
      <?php if (!empty($item['phone'])): ?>
      <div class="team-member-phone">
        <?php print $item['phone']; ?>
      </div>
      <?php endif; ?>
      <div class="team-member-mail">
        <?php print $item['#options']['entity']->mail; ?>
      </div>
    </div>
    <?php endforeach; ?>
  </div>
</div>
