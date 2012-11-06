<?php
/**
 * @file
 * openhotel_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openhotel_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'comment-recent' => array(
      'delta' => 'recent',
      'module' => 'comment',
    ),
    'commerce_cart-cart' => array(
      'delta' => 'cart',
      'module' => 'commerce_cart',
    ),
    'diff-inline' => array(
      'delta' => 'inline',
      'module' => 'diff',
    ),
    'locale-language' => array(
      'delta' => 'language',
      'module' => 'locale',
    ),
    'menu-features' => array(
      'delta' => 'features',
      'module' => 'menu',
    ),
    'menu-menu-footer-menu' => array(
      'delta' => 'menu-footer-menu',
      'module' => 'menu',
    ),
    'node-recent' => array(
      'delta' => 'recent',
      'module' => 'node',
    ),
    'node-syndicate' => array(
      'delta' => 'syndicate',
      'module' => 'node',
    ),
    'rooms_booking_manager-rooms_availability_search' => array(
      'delta' => 'rooms_availability_search',
      'module' => 'rooms_booking_manager',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'system-help' => array(
      'delta' => 'help',
      'module' => 'system',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'system-main-menu' => array(
      'delta' => 'main-menu',
      'module' => 'system',
    ),
    'system-management' => array(
      'delta' => 'management',
      'module' => 'system',
    ),
    'system-navigation' => array(
      'delta' => 'navigation',
      'module' => 'system',
    ),
    'system-powered-by' => array(
      'delta' => 'powered-by',
      'module' => 'system',
    ),
    'system-user-menu' => array(
      'delta' => 'user-menu',
      'module' => 'system',
    ),
    'user-login' => array(
      'delta' => 'login',
      'module' => 'user',
    ),
    'user-new' => array(
      'delta' => 'new',
      'module' => 'user',
    ),
    'user-online' => array(
      'delta' => 'online',
      'module' => 'user',
    ),
    'views-front_page_slide_show-block' => array(
      'delta' => 'front_page_slide_show-block',
      'module' => 'views',
    ),
    'views-slideshow-block_1' => array(
      'delta' => 'slideshow-block_1',
      'module' => 'views',
    ),
    'views-slideshow-block_2' => array(
      'delta' => 'slideshow-block_2',
      'module' => 'views',
    ),
    'views-testimonials_block-block' => array(
      'delta' => 'testimonials_block-block',
      'module' => 'views',
    ),
  );

  // openhoteltheme
  $theme = array();

  $theme['comment-recent'] = array(
    'module' => 'comment',
    'delta' => 'recent',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['commerce_cart-cart'] = array(
    'module' => 'commerce_cart',
    'delta' => 'cart',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'checkout*',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['diff-inline'] = array(
    'module' => 'diff',
    'delta' => 'inline',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'branding',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['rooms_booking_manager-rooms_availability_search'] = array(
    'module' => 'rooms_booking_manager',
    'delta' => 'rooms_availability_search',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '-1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-front_page_slide_show-block'] = array(
    'module' => 'views',
    'delta' => 'front_page_slide_show-block',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'slideshow-block_1',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-slideshow-block_2'] = array(
    'module' => 'views',
    'delta' => 'slideshow-block_2',
    'theme' => 'openhoteltheme',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-testimonials_block-block'] = array(
    'module' => 'views',
    'delta' => 'testimonials_block-block',
    'theme' => 'openhoteltheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Client Testimonials',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['openhoteltheme'] = $theme;

  // seven
  $theme = array();

  $theme['comment-recent'] = array(
    'module' => 'comment',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['commerce_cart-cart'] = array(
    'module' => 'commerce_cart',
    'delta' => 'cart',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'checkout*',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['diff-inline'] = array(
    'module' => 'diff',
    'delta' => 'inline',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['menu-menu-footer-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['node-recent'] = array(
    'module' => 'node',
    'delta' => 'recent',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '10',
    'region' => 'dashboard_main',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'i18n_mode' => '0',
  );

  $theme['node-syndicate'] = array(
    'module' => 'node',
    'delta' => 'syndicate',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['rooms_booking_manager-rooms_availability_search'] = array(
    'module' => 'rooms_booking_manager',
    'delta' => 'rooms_availability_search',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-10',
    'region' => 'dashboard_sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-management'] = array(
    'module' => 'system',
    'delta' => 'management',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['user-new'] = array(
    'module' => 'user',
    'delta' => 'new',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'i18n_mode' => '0',
  );

  $theme['user-online'] = array(
    'module' => 'user',
    'delta' => 'online',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-front_page_slide_show-block'] = array(
    'module' => 'views',
    'delta' => 'front_page_slide_show-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'slideshow-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-slideshow-block_2'] = array(
    'module' => 'views',
    'delta' => 'slideshow-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-testimonials_block-block'] = array(
    'module' => 'views',
    'delta' => 'testimonials_block-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Client Testimonials',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
