<?php

/**
 * @file
 * Theme implementation to display a 404 Drupal page.
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
  <section>
    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
    <div class="page-not-found-content">
      <div clas="page-not-found-image">
        <?php print $image_404; ?>
      </div>
      <div class="page-not-found-text">
        <?php print t("Page not found. I'm upset..."); ?>
      </div>
    </div>
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
