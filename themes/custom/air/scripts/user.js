/**
 * @file
 * Javascript file for users pages.
 */
Drupal.behaviors.userImageToggle = {
  attach: function (context, settings) {
    var $picture = jQuery('.user-picture img', context);
    $picture.mouseenter(function() {
      debugger;
      var $this = jQuery(this);
      var $link = $this.parent('a');
      $this.attr('src', $link.attr('img_src'));
    });
    $picture.mouseleave(function() {
      var $this = jQuery(this);
      var $link = $this.parent('a');
      $this.attr('src', $link.attr('photo_src'));
    });
  }
}
