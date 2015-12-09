<?php

$plugin = array(
  'title' => t('Vacancy form link'),
  'description' => t('Shows a link to vacancy form.'),
  'category' => t('IPGroup'),
  'edit form' => 'ipg_vacancy_form_link_edit_form',
  'render callback' => 'ipg_vacancy_form_link_render',
  'admin info' => 'ipg_vacancy_form_link_admin_info',
  'single'          => FALSE,
  'required context' => array(new ctools_context_required(t('Node'), 'node')),
);

/**
 * Callback to provide administrative info (the preview in panels when building a panel).
 */
function ipg_vacancy_form_link_admin_info($subtype, $conf, $context = NULL) {
  $block = new stdClass();
  $block->title = t('Vacancy form link pane');
  return $block;
}

/**
 * Edit callback for the content type.
 */
function ipg_vacancy_form_link_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function ipg_vacancy_form_link_render($subtype, $conf, $panel_args, $context) {
  if (!empty($context[0]->data)) {
    $node = $context[0]->data;
    $block = new stdClass();
    $block->content = l(t('Apply'), 'vacancies/feedback/' . $node->nid);

    return $block;
  }
}