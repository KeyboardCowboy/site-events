<?php
/**
 * @file
 * Template for a 1 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<section class="panel-multirow" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php foreach ($content as $key => $row): ?>
    <?php if (!empty($row) || $renderer->admin): ?>
    <div class="<?php print $key; ?>"><?php print $row; ?></div>
    <?php endif; ?>
  <?php endforeach; ?>
</section>
