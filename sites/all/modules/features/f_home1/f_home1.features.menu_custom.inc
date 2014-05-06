<?php
/**
 * @file
 * f_home1.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_home1_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-footer.
  $menus['menu-menu-footer'] = array(
    'menu_name' => 'menu-menu-footer',
    'title' => 'menu_footer',
    'description' => '',
  );
  // Exported menu: menu-menu-principal.
  $menus['menu-menu-principal'] = array(
    'menu_name' => 'menu-menu-principal',
    'title' => 'Menu Principal',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Principal');
  t('menu_footer');


  return $menus;
}
