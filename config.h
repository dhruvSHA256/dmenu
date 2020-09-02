/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static unsigned int lineheight =
    30; /* -h option; minimum height of a menu line     */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
    "JetBrains Mono:style=Regular:size=10:antialias=true:autohint=true",
    "JoyPixels:size=15:style=Regular:antialias=true:autohint=true",
    };
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#aaaaaa", "#2E3440"},
    [SchemeSel] = {"#F4F7F5", "#2f3440"},
    [SchemeOut] = {"#000000", "#00ffff"},
    [SchemeSelHighlight] = {"#abd76f", "#2E3440"},
    [SchemeNormHighlight] = {"#bae67e", "#2E3440"},
    [SchemeBorder] = {"#ffffff", "#ffe6b3"},  // not used value ,border color
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static const unsigned int border_width = 2;
