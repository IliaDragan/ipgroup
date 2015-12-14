Drupal.behaviors.ipgNewYear = {
  attach: function (context, settings) {
    var $window = jQuery(window);

    if ($window.width() >= 462 && $window.height() >= 628) {
      var $body = jQuery('body', context);
      $body.append(settings.nyStar);

      // Live events.
      $body.on('click', '#ny-close', function(){
        jQuery('#ny-content').remove();
      });

      $body.on('click', '.ny-toy', function(){
        jQuery('.ny-action').hide();
        var $this = jQuery(this);
        var id = $this.attr('id') + '-action';
        var $action = jQuery('#' + id);
        if ($action.hasClass('hide-toy')) {
          $this.hide();
        }
        $action.show(500);
      });

      $body.on('click', '#ny-star', function() {
        jQuery('.ny-action').hide();
        jQuery('.ny-toy').show();
      });

      var $star = jQuery('#ny-star-unclicked', context);
      $star.on('click', function() {
        $star.replaceWith(settings.nyContent);
        var $toys = jQuery('.ny-toy');
        var $garland = jQuery('#ny-garland');
        $toys.hide();
        $garland.hide();
        jQuery('#ny-tree').animate(
          {
            height: '533px'
          },
          {
            duration:3000,
            complete: function() {
              $garland.show();
              $toys.first().show("fast", function showNext() {
                jQuery(this).next('.ny-toy').show(100, showNext);
              });
            }
          });
      });
    }
  }
}
