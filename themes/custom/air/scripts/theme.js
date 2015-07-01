/**
 * @file
 * Base theme javascript file that contains scripts running on all site pages.
 */
Drupal.behaviors.allEvent  = {
  attach: function (context, settings) {
    var $row = jQuery(".view-all-event .views-row", context);
    var bgcolor = ['#EAEAEA','#2a2a2a'];
    var count = 0, colorCount = 0;
    var color = ['#464646','#ffffff']

    jQuery.each($row,function(index,value) {
      if(colorCount==2) colorCount=0;
      jQuery(this).css('background-color', bgcolor[colorCount])
        .css('color', color[colorCount])
        .css('margin-bottom',10+"px")
        .css('padding-left',10+"px")
        .css('padding-top',10+"px");
      console.log();
      count++;
      colorCount++;
    });
  }
}