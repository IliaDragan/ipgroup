/**
 * @file
 * Javascript file for users pages.
 */
Drupal.behaviors.userImageToggle = {
  attach: function (context, settings) {
    var $content = jQuery('.profile .content', context);
    var $header = jQuery('.profile header', context);
    if ($content.length && $header.length) {
      var width = $header.width() - 185;
      $content.css('width', width + 'px');
    }
  }
}
