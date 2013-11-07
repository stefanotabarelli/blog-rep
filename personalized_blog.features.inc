<?php
/**
 * @file
 * personalized_blog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function personalized_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function personalized_blog_image_default_styles() {
  $styles = array();

  // Exported image style: crazy.
  $styles['crazy'] = array(
    'name' => 'crazy',
    'label' => 'Crazy',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 500,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
      3 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 55,
          'height' => 43,
          'anchor' => 'center-center',
        ),
        'weight' => 3,
      ),
      4 => array(
        'label' => 'Rotate',
        'help' => 'Rotating an image may cause the dimensions of an image to increase to fit the diagonal.',
        'effect callback' => 'image_rotate_effect',
        'dimensions callback' => 'image_rotate_dimensions',
        'form callback' => 'image_rotate_form',
        'summary theme' => 'image_rotate_summary',
        'module' => 'image',
        'name' => 'image_rotate',
        'data' => array(
          'degrees' => 77,
          'bgcolor' => '#FFFFFF',
          'random' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function personalized_blog_node_info() {
  $items = array(
    'sessions' => array(
      'name' => t('Sessions'),
      'base' => 'node_content',
      'description' => t('I dont really know'),
      'has_title' => '1',
      'title_label' => t('Sessions'),
      'help' => '',
    ),
  );
  return $items;
}
