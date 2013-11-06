<?php
/**
 * @file
 * blog_for_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function blog_for_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blog_for_features_node_info() {
  $items = array(
    'special_blog' => array(
      'name' => t('Special Blog'),
      'base' => 'node_content',
      'description' => t('Feature testing blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
