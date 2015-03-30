<?php
/**
 * @file pco-blocks-external-link.tpl.php
 * Template for pane to render PCO block external link.
 *
 * Variables available:
 * - $bgcolor: background color from pane setting to be styled to
 * - $image: wheter use image, image with border (not implemeted), no image
 * - $titlesize: name of Hx tag (H1, H2) to be used for link title size
 * - $link_title: title to be shown above link
 * - $link_url: external url itself
 * - $link_text: text to be shown as clickable
 * - $link_image_fid: file ID for making clickable image
 * - $link_image_path: path to uploaded image
 * - $link_image_style: image cache style to alter image size
 */
?>
<?php
  $section_classes = 'pco-blocks-link ';
  $section_classes .= 'panel-pane ';
  $section_classes .= 'pane-pco-blocks ';
  $section_classes .= $bgcolor;
  if($image == 1) {
    $section_classes .= ' image';
  }
  elseif ($image == 2) {
    $section_classes .= ' image border';
  }

  echo '<section class="' . $section_classes . '">';

  if ($image && $link_image_fid) {
    $image = array(
      'style_name' => 'image_10col',
      'path' => $link_image_path,
      'alt' => ($link_text) ? $link_text : '',
      'title' => ($link_title) ? $link_title : '',
    );
    print l(theme('image_style', $image), $link_url, array('html' => TRUE));
  }
  ?>
  <div class="pane-content">
    <?php if ($link_title) { ?>
      <<?php print $titlesize; ?> class="pane-title"><?php print l($link_title, $link_url); ?></<?php print $titlesize; ?>>
    <?php } ?>
    <?php if ($link_text) { ?>
      <div class="field field-name-body field-type-text-with-summary field-label-hidden">
        <p><?php print $link_text; ?></p>
      </div>
    <?php } ?>
  </div>
</section>
