<?php
/**
 * @file
 * f_home1.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_home1_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloque_comun';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-tabs_info' => array(
          'module' => 'quicktabs',
          'delta' => 'tabs_info',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-footer',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'menu-menu-menu-principal' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-principal',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['bloque_comun'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contenido_home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-view_ss-block' => array(
          'module' => 'views',
          'delta' => 'view_ss-block',
          'region' => 'ss_image',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'trescolumnas_home',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'trescolumnas_home',
          'weight' => '-9',
        ),
        'views-view_noticias-ultimas_noticias' => array(
          'module' => 'views',
          'delta' => 'view_noticias-ultimas_noticias',
          'region' => 'trescolumnas_home',
          'weight' => '-8',
        ),
        'views-view_ss_frases-block' => array(
          'module' => 'views',
          'delta' => 'view_ss_frases-block',
          'region' => 'ss_text',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'empty_region',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'trescolumnas_home2',
          'weight' => '-15',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'trescolumnas_home2',
          'weight' => '-14',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'trescolumnas_home2',
          'weight' => '-13',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contenido_home'] = $context;

  return $export;
}
