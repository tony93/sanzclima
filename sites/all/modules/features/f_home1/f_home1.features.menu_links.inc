<?php
/**
 * @file
 * f_home1.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_home1_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-footer_terms-and-conditions:terms-and-conditions
  $menu_links['menu-menu-footer_terms-and-conditions:terms-and-conditions'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'terms-and-conditions',
    'router_path' => 'terms-and-conditions',
    'link_title' => 'Terms and conditions',
    'options' => array(
      'identifier' => 'menu-menu-footer_terms-and-conditions:terms-and-conditions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-footer_who-we-are:who-we-are
  $menu_links['menu-menu-footer_who-we-are:who-we-are'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'who-we-are',
    'router_path' => 'who-we-are',
    'link_title' => 'Who we are',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-footer_who-we-are:who-we-are',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-principal_home:<front>
  $menu_links['menu-menu-principal_home:<front>'] = array(
    'menu_name' => 'menu-menu-principal',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-principal_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-principal_noticias:noticias
  $menu_links['menu-menu-principal_noticias:noticias'] = array(
    'menu_name' => 'menu-menu-principal',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'Noticias',
    'options' => array(
      'identifier' => 'menu-menu-principal_noticias:noticias',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Noticias');
  t('Terms and conditions');
  t('Who we are');


  return $menu_links;
}
