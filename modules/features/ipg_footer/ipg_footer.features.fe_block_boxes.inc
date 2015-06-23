<?php
/**
 * @file
 * ipg_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ipg_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'contact_us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contacts_us';
  $fe_block_boxes->body = '<div id="contact_us"><div id="contact_intro" style="text-align: justify;"><span style="font-size:12px;">Contact Us:</span></div><div id="contact_inf"><p style="text-align: justify;"><span style="font-size: 12px; line-height: 20.0063037872314px;">MD 2001 Republic of Moldova</span></p><p style="text-align: justify;"><span style="font-size: 12px; line-height: 20.0063037872314px;">Chisinau&nbsp;</span><span style="font-size: 12px; line-height: 20.0063037872314px;">&nbsp;Ismail&nbsp;</span><span style="font-size: 12px; line-height: 1.538em;">58/1 of. 3&nbsp;</span></p><p style="text-align: justify;">&nbsp;</p></div></div><p>&nbsp;</p>';

  $export['contacts_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer_phone';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_phone';
  $fe_block_boxes->body = '<div id="footer_phone"><div id="contact_intro" style="text-align: justify;"><span style="font-size:12px;">Phone/Fax: +373-22-885616</span></div><div id="mob_phone"><div id="contact_intro" style="text-align: justify;"><span style="font-size:12px;">Mob.Phone: +373-60799935</span></div><div style="text-align: justify;"><span style="font-size:12px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; +373-68381231</span></div></div><p style="text-align: justify;"><span style="font-size:12px;">&nbsp;Email: <a href="/contacts">support@ipgroup.md</a></span></p></div><p>&nbsp;</p>';

  $export['footer_phone'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Logo Footer';
  $fe_block_boxes->format = 'wysiwyg_';
  $fe_block_boxes->machine_name = 'logo_footer';
  $fe_block_boxes->body = '<div id="logo_footer"><img src="http://ipgroup.loc/profiles/ipgroup/themes/custom/air/logo.png" /></div>';

  $export['logo_footer'] = $fe_block_boxes;

  return $export;
}
