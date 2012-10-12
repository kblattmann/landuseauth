<?php

/**
 * Implementation of hook_strongarm().
 */
function tkc_lua_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_landuseauthorization';
  $strongarm->value = 0;
  $export['comment_anonymous_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_landuseauthorization';
  $strongarm->value = '3';
  $export['comment_controls_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_landuseauthorization';
  $strongarm->value = '4';
  $export['comment_default_mode_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_landuseauthorization';
  $strongarm->value = '1';
  $export['comment_default_order_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_landuseauthorization';
  $strongarm->value = '50';
  $export['comment_default_per_page_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_landuseauthorization';
  $strongarm->value = '0';
  $export['comment_form_location_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_landuseauthorization';
  $strongarm->value = '2';
  $export['comment_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_landuseauthorization';
  $strongarm->value = '0';
  $export['comment_preview_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landuseauthorization';
  $strongarm->value = '1';
  $export['comment_subject_field_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_landuseauthorization';
  $strongarm->value = array(
    'title' => '11',
    'revision_information' => '49',
    'author' => '48',
    'options' => '50',
    'comment_settings' => '46',
    'menu' => '51',
    'path' => '52',
    'attachments' => '47',
    'print' => '53',
  );
  $export['content_extra_weights_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landuseauthorization';
  $strongarm->value = '0';
  $export['language_content_type_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landuseauthorization';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_landuseauthorization'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_landuseauthorization';
  $strongarm->value = '1';
  $export['upload_landuseauthorization'] = $strongarm;

  return $export;
}
