<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
  <header role="banner">
    <div role="navigation">
      <div class="header">
        <div class="languages-and-navigation">
          <?php if (!empty($page['languages'])): ?>
            <div id="languages-region">
              <?php print render($page['languages']); ?>
            </div>
          <?php endif; ?>
          <?php if (!empty($secondary_menu)): ?>
          <div id="secondary-navigation">
            <?php if ($site_slogan): ?>
            <small><?php print $site_slogan; ?></small>
            <?php endif; ?>
            <?php
              // Todo: move it to preprocess function.
              print theme('links__system_secondary_menu',
                array(
                  'links' => $secondary_menu,
                  'attributes' => array(
                    'id' => 'secondary-menu',
                    'class' => array('secondary'),
                  ),
                )
              );
            ?>
          </div>
          <?php endif; ?>
        </div>
      </div>

      <div class="top">
        <?php if ($logo): ?>
        <div class="logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        </div>
        <?php endif; ?>

        <div class="navhead">
          <?php if (!empty($main_menu)): ?>
           <nav id="main-menu-block">
             <?php
               print theme('links__system_main_menu',
                 array(
                   'links' => $main_menu,
                   'attributes' => array(
                     'id' => 'main-menu',
                     'class' => array('primary'),
                   ),
                   'heading' => t('Main menu'),
                 )
               );
             ?>
            </nav>
          <?php endif; ?>
          <?php if (!empty($page['header'])): ?>
            <?php print render($page['header']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div> <!-- /div[role="navigation"] -->

  </header> <!-- /header[role="banner"] -->
  <div id="main-content" role="main">
    <?php if (!empty($section_head)): ?>
      <header role="section-head">
        <div class="section-head">
          <h1><?php print $section_head; ?></h1>
        </div>
      </header>
    <?php endif; ?>
    <?php if (drupal_is_front_page()) : ?>
      <?php if (!empty($page['promo'])) : ?>
        <?php print render($page['promo']); ?>
      <?php endif; ?>
    <?php endif;?>
    <section>
      <?php print $messages; ?>
      <?php if ($page['highlighted']): ?>
        <div id="highlighted">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>
      <?php if ($tabs): ?><div class="tabs" role="toolbar"><?php print render($tabs); ?></div><?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </section><!-- /section -->
    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_first']); ?>
      </div></div> <!-- /.section, /#sidebar-first -->
    <?php endif; ?>
    <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="column sidebar"><div class="section">
        <?php print render($page['sidebar_second']); ?>
      </div></div> <!-- /.section, /#sidebar-second -->
    <?php endif; ?>
  </div>
  <footer>
    <?php print render($page['footer']); ?>
  </footer> <!-- /.section, /#footer -->
