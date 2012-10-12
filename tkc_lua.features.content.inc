<?php

/**
 * Implementation of hook_content_default_fields().
 */
function tkc_lua_content_default_fields() {
  $fields = array();

  // Exported field: field_easement_extents
  $fields['landuseauthorization-field_easement_extents'] = array(
    'field_name' => 'field_easement_extents',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'openlayers_map_permit_entry',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'permit_entry',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '8',
          ),
        ),
      ),
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Easement Extents',
      'weight' => '34',
      'description' => 'Upload a Shapefile in a .zip format.',
      'type' => 'spatial_widget',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_lease_extents
  $fields['landuseauthorization-field_lease_extents'] = array(
    'field_name' => 'field_lease_extents',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '36',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'openlayers_map_permit_entry',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'spatial_widget_save_file' => 0,
      'openlayers_cck_preset_map' => 'parcel_map',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '8',
          ),
        ),
      ),
      'default_value' => array(
        'shapefile_upload' => '',
      ),
      'default_value_php' => NULL,
      'label' => 'Lease Extents',
      'weight' => '36',
      'description' => 'Upload a Shapefile in a .zip format.',
      'type' => 'spatial_widget',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_lua_application_document
  $fields['landuseauthorization-field_lua_application_document'] = array(
    'field_name' => 'field_lua_application_document',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '39',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'pdf doc docx',
      'file_path' => 'user_uploads/land_use_authorization',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Application Document',
      'weight' => '39',
      'description' => 'Upload the application form.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_lua_authno
  $fields['landuseauthorization-field_lua_authno'] = array(
    'field_name' => 'field_lua_authno',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_authno][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Authorization No.',
      'weight' => '14',
      'description' => 'An authorization number.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_lua_authorizationtype
  $fields['landuseauthorization-field_lua_authorizationtype'] = array(
    'field_name' => 'field_lua_authorizationtype',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'global $user;

  if ($user->uid != "19")
return array(
"EE" => "Easement - Easement",
"CAg" => "Lease - Agricultural/Livestock",
"LCom" => "Lease - Commercial",
"LGra"=> "Lease - Grazing",
"LInd" => "Lease - Industrial",
"LIns" => "Lease - Institutional",
"LRec" => "Lease - Recreational",
"LR" => "Lease - Residential",
"LTrd" => "Lease - Traditional",
"PC" => "Permit - Tourism",
"PL" => "Permit - Land Use",
"PS" => "Permit - Scientific Research",
"PCT" => "Permit - Commercial Timber Harvest",
"PPUT" => "Permit - Personal Use Timber Harvest");
else
return array(
"PC" => "Permit - Tourism",
"PL" => "Permit - Land Use",
"PS" => "Permit - Scientific Research",
"PCT" => "Permit - Commercial Timber Harvest",
"PPUT" => "Permit - Personal Use Timber Harvest");',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Authorization Type',
      'weight' => '12',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_lua_authroizationstatus
  $fields['landuseauthorization-field_lua_authroizationstatus'] = array(
    'field_name' => 'field_lua_authroizationstatus',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Active
Suspended
Closed',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Authorization Status',
      'weight' => '13',
      'description' => 'Select the authorization status of this authorization.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_lua_client
  $fields['landuseauthorization-field_lua_client'] = array(
    'field_name' => 'field_lua_client',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '37',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'teaser',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'customreport' => 0,
      'date' => 0,
      'fnsettlementlands' => 0,
      'helpvideo' => 0,
      'home_page_map' => 0,
      'instrument' => 0,
      'transfer' => 0,
      'landuseauthorization' => 0,
      'land_use_client' => 0,
      'page' => 0,
      'slparcel' => 0,
      'ttboundary' => 0,
    ),
    'advanced_view' => 'clients_eligible',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Client',
      'weight' => '37',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_lua_condition
  $fields['landuseauthorization-field_lua_condition'] = array(
    'field_name' => 'field_lua_condition',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_condition][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Condition',
      'weight' => '43',
      'description' => 'Terms and conditions of the authorization.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_lua_description
  $fields['landuseauthorization-field_lua_description'] = array(
    'field_name' => 'field_lua_description',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '41',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '20',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Project Description',
      'weight' => '41',
      'description' => 'A description of the project.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_lua_enddate
  $fields['landuseauthorization-field_lua_enddate'] = array(
    'field_name' => 'field_lua_enddate',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '27',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_lua_enddate_long',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'field_lua_enddate_long',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'field_lua_enddate_long',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '3pikas',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '+30 years',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-0:+99',
      'label_position' => 'above',
      'label' => 'End date',
      'weight' => '27',
      'description' => 'Enter the end date for the authorization.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_lua_extents
  $fields['landuseauthorization-field_lua_extents'] = array(
    'field_name' => 'field_lua_extents',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '35',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'openlayers_map_permit_entry',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'polygon' => 'polygon',
      'point' => 0,
      'path' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'permit_entry',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 1,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '8',
          ),
        ),
      ),
      'spatial_widget_save_file' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Permit Extents',
      'weight' => '35',
      'description' => 'Upload a Shapefile in a .zip format.',
      'type' => 'spatial_widget_combo',
      'module' => 'spatial_widget',
    ),
  );

  // Exported field: field_lua_instrument
  $fields['landuseauthorization-field_lua_instrument'] = array(
    'field_name' => 'field_lua_instrument',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '38',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'teaser',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'instrument' => 'instrument',
      'date' => 0,
      'documents' => 0,
      'fnsettlementlands' => 0,
      'helpvideo' => 0,
      'home_page_map' => 0,
      'image' => 0,
      'landuseauthorization' => 0,
      'land_use_client' => 0,
      'page' => 0,
      'panel' => 0,
      'slparcel' => 0,
    ),
    'advanced_view' => 'unlinked_instruments',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Instrument',
      'weight' => '38',
      'description' => 'An instrument for this authorization.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_lua_length_10
  $fields['landuseauthorization-field_lua_length_10'] = array(
    'field_name' => 'field_lua_length_10',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '21',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_10][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '21',
      'description' => 'The length of the authorization in years. Maximum: <b>10 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_12m
  $fields['landuseauthorization-field_lua_length_12m'] = array(
    'field_name' => 'field_lua_length_12m',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '24',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' months',
    'min' => '1',
    'max' => '12',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_12m][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '24',
      'description' => 'The length of the authorization in months. Maximum: <b>12 months</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_20
  $fields['landuseauthorization-field_lua_length_20'] = array(
    'field_name' => 'field_lua_length_20',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '22',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_20][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '22',
      'description' => 'The length of the authorization in years. Maximum: <b>20 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_24m
  $fields['landuseauthorization-field_lua_length_24m'] = array(
    'field_name' => 'field_lua_length_24m',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '25',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' months',
    'min' => '1',
    'max' => '24',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_24m][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '25',
      'description' => 'The length of the authorization in months. Maximum: <b>24 months</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_30
  $fields['landuseauthorization-field_lua_length_30'] = array(
    'field_name' => 'field_lua_length_30',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '17',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '30',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_30][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '17',
      'description' => 'The length of the lease in years. Maximum: <b>30 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_40
  $fields['landuseauthorization-field_lua_length_40'] = array(
    'field_name' => 'field_lua_length_40',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '18',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '40',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_40][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '18',
      'description' => 'The length of the authorization in years. Maxiumum: <b>40 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_5
  $fields['landuseauthorization-field_lua_length_5'] = array(
    'field_name' => 'field_lua_length_5',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '19',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '5',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_5][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '19',
      'description' => 'The length of the authorization in years. Maximum: <b>5 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_6m
  $fields['landuseauthorization-field_lua_length_6m'] = array(
    'field_name' => 'field_lua_length_6m',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '23',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' months',
    'min' => '1',
    'max' => '6',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_6m][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '23',
      'description' => 'The length of the authorization in months. Maximum: <b>6 months</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_99
  $fields['landuseauthorization-field_lua_length_99'] = array(
    'field_name' => 'field_lua_length_99',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '16',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '99',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_99][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '16',
      'description' => 'The length of the lease in years. Maximum: <b>99 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_length_nl
  $fields['landuseauthorization-field_lua_length_nl'] = array(
    'field_name' => 'field_lua_length_nl',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '20',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' years',
    'min' => '1',
    'max' => '2',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_length_nl][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Length',
      'weight' => '20',
      'description' => 'The length of the lease, in years. Maximum: <b>2 years</b>.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_parcel
  $fields['landuseauthorization-field_lua_parcel'] = array(
    'field_name' => 'field_lua_parcel',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '15',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'slparcel' => 'slparcel',
      'feed' => 0,
      'feed_item' => 0,
      'fnsettlementlands' => 0,
      'instrument' => 0,
      'landuseauthorization' => 0,
      'land_use_client' => 0,
      'open_page' => 0,
      'page' => 0,
      'panel' => 0,
      'slsubparcel' => 0,
      'ttboundary' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '10',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Parcel',
      'weight' => '15',
      'description' => 'The parcel to which this land use authorization belongs.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_lua_size_02
  $fields['landuseauthorization-field_lua_size_02'] = array(
    'field_name' => 'field_lua_size_02',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '28',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '0.2',
    'max' => '2.0',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_02][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '28',
      'description' => 'The size of the lot, in hectares. Size: <b>0.2-2.0 ha</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_size_02_1
  $fields['landuseauthorization-field_lua_size_02_1'] = array(
    'field_name' => 'field_lua_size_02_1',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '29',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '0.2',
    'max' => '1.0',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_02_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '29',
      'description' => 'The size of the lot, in hectares. Size: <b>0.2-1.0 ha</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_size_04_10
  $fields['landuseauthorization-field_lua_size_04_10'] = array(
    'field_name' => 'field_lua_size_04_10',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '0.4',
    'max' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_04_10][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '32',
      'description' => 'The size of the lot, in hectares. Size: <b>0.4-10 ha</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_size_2_15
  $fields['landuseauthorization-field_lua_size_2_15'] = array(
    'field_name' => 'field_lua_size_2_15',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '30',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '2',
    'max' => '15',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_2_15][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '30',
      'description' => 'The size of the lot, in hectares. Size: <b>2.0-15 ha</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_size_2_20
  $fields['landuseauthorization-field_lua_size_2_20'] = array(
    'field_name' => 'field_lua_size_2_20',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '2',
    'max' => '20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_2_20][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '31',
      'description' => 'The size of the lot, in hectares. Size: <b>2.0-20 ha</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_size_nl
  $fields['landuseauthorization-field_lua_size_nl'] = array(
    'field_name' => 'field_lua_size_nl',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => ' ha',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_size_nl][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Size',
      'weight' => '33',
      'description' => 'The size of the lot, in hectares. Size: <b>based on needs of applicant</b>',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_lua_startdate
  $fields['landuseauthorization-field_lua_startdate'] = array(
    'field_name' => 'field_lua_startdate',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '26',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_lua_startdate_long',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'field_lua_startdate_long',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'field_lua_startdate_long',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '3pikas',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'now',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Start Date',
      'weight' => '26',
      'description' => 'Enter the date the authorization will begin.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_lua_suspended
  $fields['landuseauthorization-field_lua_suspended'] = array(
    'field_name' => 'field_lua_suspended',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_lua_suspended][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Suspended Right',
      'weight' => '45',
      'description' => 'A right of the authorization holder suspended but the Land Steward.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_lua_suspendedend
  $fields['landuseauthorization-field_lua_suspendedend'] = array(
    'field_name' => 'field_lua_suspendedend',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '3pikas',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date Suspension End',
      'weight' => '47',
      'description' => 'The date the right was unsuspended.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_lua_suspendedstart
  $fields['landuseauthorization-field_lua_suspendedstart'] = array(
    'field_name' => 'field_lua_suspendedstart',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => '3pikas',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date Suspension Start',
      'weight' => '46',
      'description' => 'The date the right was suspended.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_lua_transfer
  $fields['landuseauthorization-field_lua_transfer'] = array(
    'field_name' => 'field_lua_transfer',
    'type_name' => 'landuseauthorization',
    'display_settings' => array(
      'weight' => '40',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'transfer' => 'transfer',
      'customreport' => 0,
      'date' => 0,
      'fnsettlementlands' => 0,
      'helpvideo' => 0,
      'home_page_map' => 0,
      'instrument' => 0,
      'landuseauthorization' => 0,
      'land_use_client' => 0,
      'land_use_designation' => 0,
      'page' => 0,
      'slparcel' => 0,
      'sheetnode' => 0,
      'ttboundary' => 0,
    ),
    'referrer_fields' => array(
      'field_transfer_lua' => 'field_transfer_lua',
      'field_lua_parcel' => 0,
      'field_lua_client' => 0,
      'field_instrument_parcel' => 0,
      'field_instrument_lua_ref' => 0,
      'field_transfer_client' => 0,
      'field_transfer_fromclient' => 0,
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'CREATED_ASC',
    'widget' => array(
      'label' => 'Transfers',
      'weight' => '40',
      'description' => 'Transfers of this land use authorization.',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Application Document');
  t('Authorization No.');
  t('Authorization Status');
  t('Authorization Type');
  t('Client');
  t('Condition');
  t('Date Suspension End');
  t('Date Suspension Start');
  t('Easement Extents');
  t('End date');
  t('Instrument');
  t('Lease Extents');
  t('Length');
  t('Parcel');
  t('Permit Extents');
  t('Project Description');
  t('Size');
  t('Start Date');
  t('Suspended Right');
  t('Transfers');

  return $fields;
}
