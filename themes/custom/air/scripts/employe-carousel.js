var block11;
/**
 * @file employe-carousel.js
 *
 * Adds employe-carousel functionality
 */

Drupal.behaviors.owlEmployeeCarousel  = {
  attach: function (context, settings) {
    var $lists = jQuery(".owl-item", context);
    var count = 0;
    jQuery.each($lists,function(index,value){
      jQuery(value).css("left",count+'px');
      count+=188;
    });

  var $container = jQuery('.view.view-owl-employee-carousel', context);

    jQuery(document).ajaxComplete(function(event, xhr, settings) {
      var $lists = jQuery(".owl-item");
      var $container = jQuery('.view.view-owl-employee-carousel');
      if ($lists.length <= 3) {
        ($container).css({
          "width": "650px",
          "margin": "0 auto"
        });
      }// else
      //($container).css({"width":  "959px" })
    });
  }
}
