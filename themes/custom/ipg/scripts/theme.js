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

Drupal.behaviors.resizeNavOnScroll = {
    attach: function (context, settings) {
        jQuery(function($){
            var width = $(window).width();
            if ( width > 700) {
                $(window).bind('scroll', function() {
                    if ($(window).scrollTop() != 0) {
                        $('header').addClass('fixed');
                    }
                    else {
                        $('header').removeClass('fixed').removeAttr('class');
                    }
                });
            }
        });
    }
}

Drupal.behaviors.slideToRight = {
    attach: function (context, settings) {
        jQuery(function($){
            $('.imgohidden').hide();
            $('.imgohover').hover(function() {
                $('.imgohidden').animate({width: 'toggle'}, 500);
            });
        });
    }
}

Drupal.behaviors.promoFrontpageSlider = {
    attach: function (context, settings) {
        var sliderWidth = 0;
        jQuery('.view-front-page-slideshow ul li img', context).each(function(index) {
            sliderWidth += this.width;
        });
        if (sliderWidth > 0) {
            jQuery('.view-front-page-slideshow div.item-list', context).width(sliderWidth);
        }
    }
}
