<?php
/**
 * @file
 * openhotel_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openhotel_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access checkout.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access draggableviews.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer bookable unit types.
  $permissions['administer bookable unit types'] = array(
    'name' => 'administer bookable unit types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: administer bookable units.
  $permissions['administer bookable units'] = array(
    'name' => 'administer bookable units',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: administer booking types.
  $permissions['administer booking types'] = array(
    'name' => 'administer booking types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: administer bookings.
  $permissions['administer bookings'] = array(
    'name' => 'administer bookings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: administer checkout.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer commerce_customer_profile entities.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer commerce_order entities.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: administer commerce_product entities.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer content translations.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer customer profile types.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flexslider.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer line item types.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: administer line items.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer payment methods.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer payments.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer product pricing.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: administer product types.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer profiler builder.
  $permissions['administer profiler builder'] = array(
    'name' => 'administer profiler builder',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profiler_builder',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxes.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: book units.
  $permissions['book units'] = array(
    'name' => 'book units',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'rooms_booking_manager',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass redirection.
  $permissions['bypass redirection'] = array(
    'name' => 'bypass redirection',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_redirection',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: configure order settings.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: configure room settings.
  $permissions['configure room settings'] = array(
    'name' => 'configure room settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms',
  );

  // Exported permission: configure store.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create commerce_customer_profile entities.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_customer_profile entities of bundle billing.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_order entities.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_order entities of bundle commerce_order.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_product entities.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle product.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle rooms_product.
  $permissions['create commerce_product entities of bundle rooms_product'] = array(
    'name' => 'create commerce_product entities of bundle rooms_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: create front_page_slideshow_slide content.
  $permissions['create front_page_slideshow_slide content'] = array(
    'name' => 'create front_page_slideshow_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create payments.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: create photo_gallery content.
  $permissions['create photo_gallery content'] = array(
    'name' => 'create photo_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create testimonials content.
  $permissions['create testimonials content'] = array(
    'name' => 'create testimonials content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create unit_description content.
  $permissions['create unit_description content'] = array(
    'name' => 'create unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any front_page_slideshow_slide content.
  $permissions['delete any front_page_slideshow_slide content'] = array(
    'name' => 'delete any front_page_slideshow_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any photo_gallery content.
  $permissions['delete any photo_gallery content'] = array(
    'name' => 'delete any photo_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any testimonials content.
  $permissions['delete any testimonials content'] = array(
    'name' => 'delete any testimonials content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any unit_description content.
  $permissions['delete any unit_description content'] = array(
    'name' => 'delete any unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own front_page_slideshow_slide content.
  $permissions['delete own front_page_slideshow_slide content'] = array(
    'name' => 'delete own front_page_slideshow_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own photo_gallery content.
  $permissions['delete own photo_gallery content'] = array(
    'name' => 'delete own photo_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own testimonials content.
  $permissions['delete own testimonials content'] = array(
    'name' => 'delete own testimonials content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own unit_description content.
  $permissions['delete own unit_description content'] = array(
    'name' => 'delete own unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete payments.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any commerce_customer_profile entity.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_customer_profile entity of bundle billing.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_order entity.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_order entity of bundle commerce_order.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_product entity.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle product.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle rooms_product.
  $permissions['edit any commerce_product entity of bundle rooms_product'] = array(
    'name' => 'edit any commerce_product entity of bundle rooms_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any double_bed bookable unit.
  $permissions['edit any double_bed bookable unit'] = array(
    'name' => 'edit any double_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: edit any front_page_slideshow_slide content.
  $permissions['edit any front_page_slideshow_slide content'] = array(
    'name' => 'edit any front_page_slideshow_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any photo_gallery content.
  $permissions['edit any photo_gallery content'] = array(
    'name' => 'edit any photo_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any single_bed bookable unit.
  $permissions['edit any single_bed bookable unit'] = array(
    'name' => 'edit any single_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: edit any standard_booking booking.
  $permissions['edit any standard_booking booking'] = array(
    'name' => 'edit any standard_booking booking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: edit any suite bookable unit.
  $permissions['edit any suite bookable unit'] = array(
    'name' => 'edit any suite bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: edit any testimonials content.
  $permissions['edit any testimonials content'] = array(
    'name' => 'edit any testimonials content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any twin_bed bookable unit.
  $permissions['edit any twin_bed bookable unit'] = array(
    'name' => 'edit any twin_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: edit any unit_description content.
  $permissions['edit any unit_description content'] = array(
    'name' => 'edit any unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own commerce_customer_profile entities.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_customer_profile entities of bundle billing.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_order entities.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_order entities of bundle commerce_order.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_product entities.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle product.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle rooms_product.
  $permissions['edit own commerce_product entities of bundle rooms_product'] = array(
    'name' => 'edit own commerce_product entities of bundle rooms_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own front_page_slideshow_slide content.
  $permissions['edit own front_page_slideshow_slide content'] = array(
    'name' => 'edit own front_page_slideshow_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own photo_gallery content.
  $permissions['edit own photo_gallery content'] = array(
    'name' => 'edit own photo_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own testimonials content.
  $permissions['edit own testimonials content'] = array(
    'name' => 'edit own testimonials content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own unit_description content.
  $permissions['edit own unit_description content'] = array(
    'name' => 'edit own unit_description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: execute unlink files.
  $permissions['execute unlink files'] = array(
    'name' => 'execute unlink files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ftools',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage booking unit availability.
  $permissions['manage booking unit availability'] = array(
    'name' => 'manage booking unit availability',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: manage booking unit pricing.
  $permissions['manage booking unit pricing'] = array(
    'name' => 'manage booking unit pricing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: reference booking unit availability.
  $permissions['reference booking unit availability'] = array(
    'name' => 'reference booking unit availability',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_availability_reference',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: translate admin strings.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate user-defined strings.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: update payments.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use ccl.
  $permissions['use ccl'] = array(
    'name' => 'use ccl',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ccl',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any commerce_customer_profile entity.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_customer_profile entity of bundle billing.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_order entity.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_order entity of bundle commerce_order.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_product entity.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle product.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle rooms_product.
  $permissions['view any commerce_product entity of bundle rooms_product'] = array(
    'name' => 'view any commerce_product entity of bundle rooms_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view any double_bed bookable unit.
  $permissions['view any double_bed bookable unit'] = array(
    'name' => 'view any double_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: view any single_bed bookable unit.
  $permissions['view any single_bed bookable unit'] = array(
    'name' => 'view any single_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: view any standard_booking booking.
  $permissions['view any standard_booking booking'] = array(
    'name' => 'view any standard_booking booking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: view any suite bookable unit.
  $permissions['view any suite bookable unit'] = array(
    'name' => 'view any suite bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: view any twin_bed bookable unit.
  $permissions['view any twin_bed bookable unit'] = array(
    'name' => 'view any twin_bed bookable unit',
    'roles' => array(),
    'module' => 'rooms_unit',
  );

  // Exported permission: view own commerce_customer_profile entities.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_customer_profile entities of bundle billing.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_order entities.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_order entities of bundle commerce_order.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_product entities.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle product.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle rooms_product.
  $permissions['view own commerce_product entities of bundle rooms_product'] = array(
    'name' => 'view own commerce_product entities of bundle rooms_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view payments.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
