/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font Cyberpunks.ttf --range 32-127 --format lvgl -o cyber_14.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef CYBER_14
#define CYBER_14 1
#endif

#if CYBER_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x7f, 0xff, 0xff, 0x1f, 0x80,

    /* U+0022 "\"" */
    0xff, 0xff, 0xc0,

    /* U+0023 "#" */
    0x1, 0x77, 0x77, 0xff, 0xff, 0x77, 0x77, 0xff,
    0xff, 0x77, 0x77, 0x60,

    /* U+0024 "$" */
    0x8, 0x73, 0xff, 0xfe, 0xfc, 0x3f, 0xff, 0xef,
    0xff, 0xf9, 0xc2, 0x0,

    /* U+0025 "%" */
    0x66, 0x6e, 0xc, 0x1c, 0x18, 0x38, 0x30, 0x76,
    0x66,

    /* U+0026 "&" */
    0xfe, 0xfe, 0xee, 0xee, 0x7c, 0x7c, 0xee, 0xff,
    0xff, 0xe, 0x8,

    /* U+0027 "'" */
    0xff, 0xf0,

    /* U+0028 "(" */
    0xff, 0xee, 0xee, 0xee, 0xee, 0xff,

    /* U+0029 ")" */
    0xff, 0x77, 0x77, 0x77, 0x77, 0xff,

    /* U+002A "*" */
    0x23, 0xbe, 0xe2, 0x0,

    /* U+002B "+" */
    0x30, 0x63, 0xff, 0xf3, 0x6, 0xc, 0x0,

    /* U+002C "," */
    0xff, 0xf0,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x7, 0xe, 0xe, 0x1c, 0x18, 0x38, 0x30, 0x70,
    0x60,

    /* U+0030 "0" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,

    /* U+0031 "1" */
    0x7f, 0xff, 0xff, 0xfc,

    /* U+0032 "2" */
    0xff, 0xfd, 0xb9, 0x7f, 0xff, 0xfb, 0x7f, 0xfe,

    /* U+0033 "3" */
    0xff, 0xfc, 0x38, 0x7f, 0xff, 0xc3, 0xff, 0xfe,

    /* U+0034 "4" */
    0xef, 0xdf, 0xbf, 0x7f, 0xff, 0xc3, 0x87, 0xe,
    0x1c, 0x20,

    /* U+0035 "5" */
    0xff, 0xff, 0x87, 0xf, 0xff, 0xdb, 0xff, 0xfe,

    /* U+0036 "6" */
    0xff, 0xff, 0x87, 0x8f, 0xdf, 0xfb, 0xff, 0xfe,

    /* U+0037 "7" */
    0xff, 0xff, 0xbf, 0x78, 0xe1, 0xc3, 0x87, 0xe,
    0x18,

    /* U+0038 "8" */
    0xff, 0xff, 0xbf, 0x7f, 0xff, 0xfb, 0xff, 0xfe,

    /* U+0039 "9" */
    0xff, 0xff, 0xbf, 0xf7, 0xe3, 0xc3, 0xff, 0xfe,

    /* U+003A ":" */
    0xfc, 0x7e,

    /* U+003B ";" */
    0xfc, 0x7f, 0xf8,

    /* U+003C "<" */
    0x3, 0x67, 0x30,

    /* U+003D "=" */
    0xff, 0xc1, 0xff, 0x80,

    /* U+003E ">" */
    0x4e, 0x77, 0x60,

    /* U+003F "?" */
    0xff, 0xff, 0x19, 0xf3, 0xe7, 0x0, 0x1c, 0x38,

    /* U+0040 "@" */
    0xff, 0xfe, 0xc, 0x99, 0xf3, 0xe0, 0xff, 0xfe,

    /* U+0041 "A" */
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xfb, 0xf7, 0xee,
    0xc,

    /* U+0042 "B" */
    0xff, 0xff, 0xbf, 0xff, 0xdf, 0xfb, 0xff, 0xfe,

    /* U+0043 "C" */
    0xff, 0xff, 0xbf, 0x4e, 0x3d, 0xfb, 0xff, 0xfe,

    /* U+0044 "D" */
    0xf9, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,

    /* U+0045 "E" */
    0xff, 0xff, 0x87, 0xf, 0x9f, 0xb8, 0x7f, 0xfe,

    /* U+0046 "F" */
    0xff, 0xff, 0x87, 0xcf, 0xdc, 0x38, 0x70, 0xe1,
    0x0,

    /* U+0047 "G" */
    0xff, 0xff, 0xb7, 0xe, 0x7d, 0xfb, 0xff, 0xfe,

    /* U+0048 "H" */
    0xc1, 0xdf, 0xbf, 0x7e, 0xff, 0xff, 0xf7, 0xef,
    0xdc, 0x18,

    /* U+0049 "I" */
    0xdf, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0x1c, 0x38, 0x70, 0xe1, 0xcb, 0xf7, 0xff,
    0xfc,

    /* U+004B "K" */
    0x81, 0xc3, 0xa7, 0x7e, 0xff, 0xff, 0xff, 0xef,
    0xdf, 0xbe, 0x0,

    /* U+004C "L" */
    0xc3, 0x8e, 0x38, 0xe3, 0x8e, 0x38, 0xff, 0xe0,

    /* U+004D "M" */
    0xff, 0xff, 0xff, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77, 0xee, 0xe0, 0xc,

    /* U+004E "N" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xee,
    0x18,

    /* U+004F "O" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,

    /* U+0050 "P" */
    0xff, 0xff, 0xbf, 0xff, 0xde, 0x38, 0x70, 0xe1,
    0x80,

    /* U+0051 "Q" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,
    0x70, 0xe0, 0x40,

    /* U+0052 "R" */
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xfb, 0xf7, 0xef,
    0x80,

    /* U+0053 "S" */
    0xff, 0xff, 0xb7, 0x4f, 0xff, 0xdb, 0xff, 0xfe,

    /* U+0054 "T" */
    0xff, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x30,

    /* U+0055 "U" */
    0xd, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xff,
    0xfc,

    /* U+0056 "V" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xbe, 0x38,
    0x20,

    /* U+0057 "W" */
    0x0, 0x7d, 0xdf, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77, 0xff, 0xff, 0xfc,

    /* U+0058 "X" */
    0xc1, 0xdf, 0xbf, 0x7f, 0xef, 0xbf, 0xf7, 0xef,
    0xdc, 0x18,

    /* U+0059 "Y" */
    0x2, 0x1c, 0xbf, 0x7e, 0xff, 0xdf, 0x8f, 0xe,
    0x1c, 0x38, 0x70, 0x20,

    /* U+005A "Z" */
    0xff, 0xfd, 0xb9, 0x7f, 0xff, 0xfb, 0x7f, 0xfe,

    /* U+005B "[" */
    0xff, 0xee, 0xee, 0xee, 0xee, 0xff,

    /* U+005C "\\" */
    0x60, 0x70, 0x30, 0x38, 0x18, 0x1c, 0xe, 0xe,
    0x7,

    /* U+005D "]" */
    0xff, 0x77, 0x77, 0x77, 0x77, 0xff,

    /* U+005E "^" */
    0xff, 0xf0,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xff, 0xf0,

    /* U+0061 "a" */
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xfb, 0xf7, 0xef,
    0x80,

    /* U+0062 "b" */
    0xff, 0xff, 0xbf, 0xff, 0xdf, 0xfb, 0xff, 0xfe,

    /* U+0063 "c" */
    0xff, 0xff, 0xbf, 0x4e, 0x3d, 0xfb, 0xff, 0xfe,

    /* U+0064 "d" */
    0xc1, 0xe3, 0xf7, 0xfe, 0xfd, 0xfb, 0xf7, 0xff,
    0xfc,

    /* U+0065 "e" */
    0xff, 0xff, 0x87, 0xf, 0x9f, 0xb8, 0x7f, 0xfe,

    /* U+0066 "f" */
    0xff, 0xff, 0x87, 0xcf, 0xdc, 0x38, 0x70, 0xe1,
    0x0,

    /* U+0067 "g" */
    0xff, 0xff, 0xb7, 0xe, 0x7d, 0xfb, 0xff, 0xfe,

    /* U+0068 "h" */
    0x7, 0xdf, 0xbf, 0x7e, 0xff, 0xff, 0xf7, 0xef,
    0xdf, 0x0,

    /* U+0069 "i" */
    0x7f, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x17, 0x77, 0x77, 0x77, 0x77, 0x7f, 0xf0,

    /* U+006B "k" */
    0x81, 0xc3, 0xa7, 0x7e, 0xff, 0xff, 0xff, 0xef,
    0xdf, 0xbe, 0x0,

    /* U+006C "l" */
    0xce, 0xee, 0xee, 0xee, 0xff,

    /* U+006D "m" */
    0xff, 0xff, 0xff, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77, 0xee, 0xf8, 0x0,

    /* U+006E "n" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xee,
    0xc,

    /* U+006F "o" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,

    /* U+0070 "p" */
    0xff, 0xff, 0xbf, 0xff, 0xde, 0x38, 0x70, 0xe1,
    0x80,

    /* U+0071 "q" */
    0xff, 0xff, 0xbf, 0x7e, 0xfd, 0xfb, 0xff, 0xfe,
    0x70, 0xe1, 0x0,

    /* U+0072 "r" */
    0xff, 0xff, 0xbf, 0xff, 0xff, 0xfb, 0xf7, 0xef,
    0x80,

    /* U+0073 "s" */
    0xff, 0xff, 0xb7, 0x4f, 0xff, 0xdb, 0xff, 0xfe,

    /* U+0074 "t" */
    0xff, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x60,

    /* U+0075 "u" */
    0x7, 0xdf, 0xbf, 0x7e, 0xfd, 0xfb, 0xf7, 0xff,
    0xfc,

    /* U+0076 "v" */
    0xef, 0xdf, 0xbf, 0x7e, 0xfd, 0xff, 0xbe, 0x38,
    0x20,

    /* U+0077 "w" */
    0x0, 0xdd, 0xdf, 0xbb, 0xf7, 0x7e, 0xef, 0xdd,
    0xfb, 0xbf, 0x77, 0xff, 0xff, 0xfc,

    /* U+0078 "x" */
    0x7, 0xdf, 0xbf, 0x7f, 0xef, 0xbf, 0xf7, 0xef,
    0xdf, 0x0,

    /* U+0079 "y" */
    0x2, 0x1c, 0xbf, 0x7e, 0xff, 0xdf, 0x8f, 0xe,
    0x1c, 0x38, 0x70, 0x20,

    /* U+007A "z" */
    0xff, 0xfd, 0xb9, 0x7f, 0xff, 0xfb, 0x7f, 0xfe,

    /* U+007B "{" */
    0x7b, 0xdc, 0xe7, 0x7b, 0xce, 0x73, 0x9e, 0xf0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xe0,

    /* U+007D "}" */
    0xf7, 0x9c, 0xe7, 0x3d, 0xee, 0x73, 0xbd, 0xe0,

    /* U+007E "~" */
    0xff, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 55, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 109, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 33, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 55, .adv_w = 66, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 66, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 67, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 71, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 120, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 82, .adv_w = 55, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 55, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 130, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 155, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 55, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 55, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 176, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 179, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 183, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 186, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 211, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 252, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 270, .adv_w = 55, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 294, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 316, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 325, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 342, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 353, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 362, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 379, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 397, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 421, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 433, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 66, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 447, .adv_w = 131, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 66, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 462, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 464, .adv_w = 120, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 466, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 468, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 477, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 519, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 537, .adv_w = 55, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 77, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 548, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 559, .adv_w = 77, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 578, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 587, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 604, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 615, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 624, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 641, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 659, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 683, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 695, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 77, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 711, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 77, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 723, .adv_w = 88, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};

extern const lv_font_t  lv_font_montserrat_14;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t cyber_14 = {
#else
lv_font_t cyber_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = & lv_font_montserrat_14,
#endif
    .user_data = NULL,
};



#endif /*#if CYBER_14*/

