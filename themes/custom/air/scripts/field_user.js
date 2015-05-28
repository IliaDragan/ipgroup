/**
 * @file
 * Javascript file for user field.
 */
Drupal.behaviors.userField = {
  attach: function (context, settings) {
    jQuery(window).load(function(){
      var $photo = jQuery('.field-name-field-image img', context);
      var $users = jQuery('.team-members', context);
      var $title = jQuery('.pane-node-field-user .pane-title', context);
      var $button = jQuery('.team-members-collapse-expand', context);
      var original_height = $users.height();
      var height = $photo.length ? $photo.height() : 0;

      if (height > 0) {
        height -= $title.height();
        // Remove paddings.
        height -= parseInt($title.css('padding-top'));
        height -= parseInt($title.css('padding-bottom'));
        height -= parseInt($users.css('padding-top'));
        height -= parseInt($users.css('padding-bottom'));
        // Remove borders 2px.
        height -= 2;
        $users.css('min-height', height);
      }

      if ((original_height <= height) || (height == 0)) {
        $button.remove();
        $users.css('position', 'relative');
      }
      else {
        $users.css('height', height);
        $button.removeClass('expanded');

        $button.on('click', function () {
          if ($button.hasClass('expanded')) {
            $users.animate({
              height: height
            }, 1000);
            $button.removeClass('expanded');
          }
          else {
            $button.addClass('expanded');
            $users.animate({
              height: original_height
            }, 1000);
          }
        });
      }

      //Fix photo width.
      var width = $photo.parents().width() - 2;
      $photo.css('width', width + 'px');
    });
  }
}
