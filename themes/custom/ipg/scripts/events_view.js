/**
 * @file
 * Javascript file for events view.
 */
Drupal.behaviors.eventsFilter = {
  attach: function (context, settings) {
    var $cButton = jQuery('#events-filter-corporative', context);
    var $corporative = jQuery('.views-row.corporative');
    var $tButton = jQuery('#events-filter-technical', context);
    var $technical = jQuery('.views-row.technical');


    $cButton.on('click', function(context) {
      changeZebra($corporative);
      $corporative.animate({
        height: 'show'
      }, 500);
      $technical.animate({
        height: 'hide'
      }, 500);
      $tButton.removeClass('active');
      $cButton.addClass('active');
    });

    $tButton.on('click', function(context) {
      changeZebra($technical);
      $technical.animate({
        height: 'show'
      }, 500);
      $corporative.animate({
        height: 'hide'
      }, 500);
      $cButton.removeClass('active');
      $tButton.addClass('active');
    });
  }
}

function changeZebra(rows) {
  jQuery.each(rows, function(key, value) {
    if (key % 2) {
      jQuery(value).addClass('views-row-odd').removeClass('views-row-even');
    }
    else {
      jQuery(value).addClass('views-row-even').removeClass('views-row-odd');
    }
  });
}