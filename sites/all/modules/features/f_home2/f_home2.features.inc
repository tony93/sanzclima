<?php
/**
 * @file
 * f_home2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_home2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_home2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function f_home2_node_info() {
  $items = array(
    'imagenes' => array(
      'name' => t('imagenes_ss'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('imagenes_ss'),
      'help' => '',
    ),
    'ss_texto_home' => array(
      'name' => t('ss_texto_home'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ss_texto_home_flechas' => array(
      'name' => t('ss_texto_home_flechas'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tc_noticia' => array(
      'name' => t('tc_noticia'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
