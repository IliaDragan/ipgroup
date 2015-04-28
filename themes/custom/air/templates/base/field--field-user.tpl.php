<div class="team-members">
<?php foreach ($items as $item): ?>
  <div class="team-member">
    <div class="team-member-field-name">
      <?php print l($item['#options']['entity']->field_name['und'][0]['value'], $item['#href']); ?>
    </div>
    <div class="team-member-field-position">
      <?php print $item['#options']['entity']->field_position['und'][0]['value']; ?>
    </div>
  </div>
<?php endforeach; ?>
</div>