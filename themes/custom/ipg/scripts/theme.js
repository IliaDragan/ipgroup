/**
 * @file
 * Base theme javascript file that contains scripts running on all site pages.
 */
Drupal.behaviors.userImageToggle = {
    attach: function (context, sitings) {
        //refresh page on browser resize
        jQuery(function($){
            var windowWidth = $(window).width();

            $(window).resize(function() {
                if(windowWidth != $(window).width()){
                    location.reload();
                    return;
                }
            });
        });
    }
}