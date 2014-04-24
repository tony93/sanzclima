<?php
/**
 * @file
 * f_colocacionss.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_colocacionss_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloque_slideshow';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-view_ss-block' => array(
          'module' => 'views',
          'delta' => 'view_ss-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['bloque_slideshow'] = $context;

  return $export;
}
