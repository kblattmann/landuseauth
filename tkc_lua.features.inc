<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function tkc_lua_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function tkc_lua_node_info() {
  $items = array(
    'landuseauthorization' => array(
      'name' => t('Land Use Authorization'),
      'module' => 'features',
      'description' => t('Information related to a land use authorization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
