<?php
/**
 * @file
 * f_home1.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function f_home1_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tc_noticia|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tc_noticia';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|tc_noticia|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tc_noticia|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tc_noticia';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|tc_noticia|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tc_noticia|ultimas_noticias_home';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tc_noticia';
  $ds_fieldsetting->view_mode = 'ultimas_noticias_home';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'titulo-noticia-home',
        'exclude node title settings' => '0',
      ),
    ),
  );
  $export['node|tc_noticia|ultimas_noticias_home'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function f_home1_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ss_texto_home_flechas|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ss_texto_home_flechas';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_flecha_ss_texto',
      ),
    ),
    'fields' => array(
      'field_flecha_ss_texto' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ss_texto_home_flechas|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ss_texto_home_flechas|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ss_texto_home_flechas';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_flecha_ss_texto',
      ),
    ),
    'fields' => array(
      'field_flecha_ss_texto' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ss_texto_home_flechas|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|ss_texto_home|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'ss_texto_home';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ss_texto_frase',
        1 => 'field_ss_texto_sub',
      ),
    ),
    'fields' => array(
      'field_ss_texto_frase' => 'ds_content',
      'field_ss_texto_sub' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|ss_texto_home|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tc_noticia|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tc_noticia';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_body_noticia',
        3 => 'author',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_body_noticia' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|tc_noticia|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tc_noticia|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tc_noticia';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_body_noticia',
        3 => 'author',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_body_noticia' => 'ds_content',
      'author' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|tc_noticia|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tc_noticia|ultimas_noticias_home';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tc_noticia';
  $ds_layout->view_mode = 'ultimas_noticias_home';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_body_noticia',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_body_noticia' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|tc_noticia|ultimas_noticias_home'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function f_home1_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ultimas_noticias_home';
  $ds_view_mode->label = 'ultimas_noticias_home';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['ultimas_noticias_home'] = $ds_view_mode;

  return $export;
}
