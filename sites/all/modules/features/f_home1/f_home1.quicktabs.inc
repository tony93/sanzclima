<?php
/**
 * @file
 * f_home1.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function f_home1_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'tabs_info';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'tabs_info';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'customblocks_delta_phone',
      'hide_title' => 1,
      'title' => 'telefono',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'customblocks_delta_address',
      'hide_title' => 1,
      'title' => 'direccion',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'customblocks_delta_email',
      'hide_title' => 1,
      'title' => 'correo',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Navlist';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('correo');
  t('direccion');
  t('tabs_info');
  t('telefono');

  $export['tabs_info'] = $quicktabs;

  return $export;
}
