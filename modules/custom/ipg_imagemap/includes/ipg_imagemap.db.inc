<?php

/**
 * Save hotspot data in database.
 * @param int $fid File id
 * @param string $language language.
 * @param string $data Information about hotspots (JSON)
 */
function ipg_imagemap_db_save($fid, $language, $data) {
  if (empty($data)) {
    return;
  }
  $fields = array('fid' => $fid, 'language' => $language, 'coordinates' => $data);
  drupal_write_record('ipg_imagemap', $fields);
}

/**
 * Update hotspot data in database.
 * @param int $fid File id
 * @param string $language language.
 * @param string $data Information about imagemaps (JSON)
 */
function ipg_imagemap_db_update($fid, $language, $data) {
  if (empty($data)) {
    return;
  }
  $fields = array('fid' => $fid, 'language' => $language, 'coordinates' => $data);
  drupal_write_record('ipg_imagemap', $fields, array('fid', 'language'));
}

/**
 * Delete imagemap data from database.
 * @param int $fid File id
 * @param string $language language.
 */
function ipg_imagemap_db_delete($fid, $language) {
  db_delete('ipg_imagemap')
    ->condition('fid', $fid)
    ->condition('language', $language)
    ->execute();
}

/**
 * Get imagemap data from database.
 * @param array $fid image file id
 * @param string $language language.
 */
function ipg_imagemap_db_get_coordinates($fid, $language) {
  $query = db_select('ipg_imagemap', 'im');
  $query->fields('im', array('coordinates', 'fid'));
  $query->condition('im.fid', $fid);
  $query->condition('im.language', $language);
  $data = $query->execute()->fetchAll();

  return $data;
}
