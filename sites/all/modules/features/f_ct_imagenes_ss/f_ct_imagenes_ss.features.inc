<?php
/**
 * @file
 * f_ct_imagenes_ss.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_ct_imagenes_ss_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function f_ct_imagenes_ss_node_info() {
  $items = array(
    'imagenes' => array(
      'name' => t('imagenes_ss'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('imagenes_ss'),
      'help' => '',
    ),
  );
  return $items;
}
