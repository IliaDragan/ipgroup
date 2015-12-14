/**
 * @file
 * Javascript for adding wait message to vacancy apply form.
 */

Drupal.behaviors.vacancyApply = {
  attach: function (context, settings) {
    jQuery('#ipg-vacancy-feedback-form #edit-submit', context).on('click', function() {
      var $form = jQuery('#ipg-vacancy-feedback-form', context);
      var formWidth = $form.width();
      $form.append(settings.vacancyFormWaitText);
      var $msg = jQuery('#form-wait-msg', context);
      $msg.css('left', (formWidth/2 - $msg.width()/2));
    });
  }
}
