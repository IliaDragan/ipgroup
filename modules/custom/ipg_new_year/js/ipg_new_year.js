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
      jQuery('#ny-tree').animate({height: '520px'}, 3000);
    });
  }
}
