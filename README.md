start-limiter
=============

Provides a simple Drupal Ctools style plugin that creates a wrapper element on a Panels region to set context for your grid framework.

## Installation inside of a theme

This style plugin is written for inclusion inside of your Drupal them/sub-theme.

```
theme
  plugins
    styles
```

## Installation inside a custom module

Tell Ctools you will be providing plugins inside of `MODULENAME.module`:

```
/**
 * Implements hook_ctools_plugin_directory().
 */
function MODULENAME_ctools_plugin_directory($owner, $plugin_type) {
  // Set up for all the ctool plugin types
  if ($owner == 'ctools') {
    return 'plugins/' . $plugin_type;
  }
}
```

Then create the directory tree:

```
MODULENAME
  plugins
    styles
```

## Typical Usage

I build a lot of [Drupal](http://drupal.org/ "Drupal - Open Source CMS | Drupal.org") sites using [Panels Everywhere](http://drupal.org/project/panels_everywhere "Panels Everywhere | Drupal.org") and often get a design requirement with a full width color background that has a centered content region where I need to apply a grid context.

This style is applied to the primary regions of the site template to wrap all panes inside the region in a `<div class="limiter">`. Then typically the style on this `div` is somethign like this:

```
.limiter {
  margin: 0 auto;
  max-width: 1200px;
  position: relative;
  width: 95%;
}
```

Since my projects usually invovle [Singularity.gs](https://github.com/Team-Sass/Singularity "Team-Sass/Singularity") as the grid framework I then use the `add-grid` and `add-gutter` mixins to this container.

```
.limiter {
  @include add-grid(12);
  @include gutter(1/4)
}
```
