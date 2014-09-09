<?php
/**
 * @file
 * my_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function my_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function my_feature_node_info() {
  $items = array(
    'mycontent' => array(
      'name' => t('MyContent'),
      'base' => 'node_content',
      'description' => t('This is a test content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
