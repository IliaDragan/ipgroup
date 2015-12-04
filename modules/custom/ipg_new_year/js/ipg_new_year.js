Drupal.behaviors.ipgNewYear = {
  attach: function (context, settings) {
    var $body = jQuery('body', context);
    $body.append(settings.nyStar);

    // Live events.
    $body.on('click', '#ny-close', function(){
      jQuery('#ny-content').remove();
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
