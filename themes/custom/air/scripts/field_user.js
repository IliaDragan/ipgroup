/**
 * @file
 * Javascript file for user field.
 */
Drupal.behaviors.userField = {
  attach: function (context, settings) {
    var $user = jQuery('.team-member', context);
    var $info = jQuery('.team-members-info', context);
    $user.mouseenter(function() {
      var $this = jQuery(this);
      var id = $this.attr('id');
      $info.removeClass('hidden').find('.' + id).removeClass('hidden');
    });
    $user.mouseleave(function() {
      var $this = jQuery(this);
      var id = $this.attr('id');
      $info.addClass('hidden').find('.' + id).addClass('hidden');
    });
  }
}
