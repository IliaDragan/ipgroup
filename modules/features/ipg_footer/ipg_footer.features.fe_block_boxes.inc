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
  $fe_block_boxes->format = 'wysiwyg_';
  $fe_block_boxes->machine_name = 'contacts_us';
  $fe_block_boxes->body = '<p><span style="font-size:20px;"><strong>Contact us:</strong></span></p><p><a href="/contacts"><img alt="" src="/profiles/ipgroup/themes/custom/air/images/you-are-here.jpg" style="height: 17px; width: 17px;" /></a> <span style="font-size:12px;"><a href="/contacts">MD-2001 Republic of Moldova<br />&nbsp; &nbsp; &nbsp; Chisinau Ismail 58/1 of. 3&nbsp;</a></span></p>';

  $export['contacts_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'facebook_like';
  $fe_block_boxes->format = 'wysiwyg_';
  $fe_block_boxes->machine_name = 'facebook_like';
  $fe_block_boxes->body = '<p id="facebook_like"><a href="https://www.facebook.com/IPGroupMD?fref=ts"><img alt="" src="/profiles/ipgroup/themes/custom/ipg/images/facebook.png" style="width: 36px; height: 36px;" /></a></p>';

  $export['facebook_like'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer_phone';
  $fe_block_boxes->format = 'wysiwyg_';
  $fe_block_boxes->machine_name = 'footer_phone';
  $fe_block_boxes->body = '<table border="0" cellpadding="1" cellspacing="1" style="height: 100%;"><tbody><tr><td>&nbsp;</td><td>&nbsp;</td></tr><tr><td class="td-image"><img alt="" src="/profiles/ipgroup/themes/custom/air/images/fax1.jpg" style="width: 17px; height: 17px;" /></td><td>&nbsp;+373-22-885616</td></tr><tr><td><img alt="" src="/profiles/ipgroup/themes/custom/air/images/phone2.jpg" style="width: 17px; height: 17px;" /></td><td>&nbsp;+373-60799935</td></tr><tr><td><img alt="" src="/profiles/ipgroup/themes/custom/air/images/mail1.jpg" style="width: 17px; height: 17px;" /></td><td>&nbsp;<a href="mailto:support@ipgroup.md" target="_blank">support@ipgroup.md</a></td></tr></tbody></table><p>&nbsp;</p>';

  $export['footer_phone'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Logo Footer';
  $fe_block_boxes->format = 'wysiwyg_';
  $fe_block_boxes->machine_name = 'logo_footer';
  $fe_block_boxes->body = '<div id="logo_footer"><img src="/profiles/ipgroup/themes/custom/air/logo.png" style="width: 175px; height: 74px;" /></div>';

  $export['logo_footer'] = $fe_block_boxes;

  return $export;
}
