<?php
/**
 * @file
 * personalized_blog.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function personalized_blog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Menu items for any enabled features.');


  return $menus;
}
