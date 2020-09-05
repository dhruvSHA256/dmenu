/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static unsigned int lineheight =
    18; /* -h option; minimum height of a menu line     */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {"Symbols Nerd Font:style=2048-em:size=12",
                              "Operator Mono Lig:style=medium:size=12",
                              "JoyPixels:pixelsize=16:antialias=true:autohint=true"};
/* static const char *fonts[] = {"Symbols Nerd Font:style=2048-em:size=12", */
/*                               "Hurmit Nerd Font Mono:style=medium:size=12", */
/*                               "JoyPixels:pixelsize=16:antialias=true:autohint=true"}; */
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#dFcFaF", "#2D2927"},
    [SchemeSel] = {"#d9c9a0", "#131313"},
    [SchemeOut] = {"#000000", "#00ffff"},
    [SchemeSelHighlight] = {"#EBE3CF", "#202223"},
    [SchemeNormHighlight] = {"#EBE3CF", "#202223"},
    [SchemeBorder] = {"#ffffff", "#ffe6b3"}, // not used value ,border color
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static const unsigned int border_width = 0;
