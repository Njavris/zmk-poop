/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font Cyberpunks.ttf --range 32-127 --format lvgl -o cyber_12.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef CYBER_12
#define CYBER_12 1
#endif

#if CYBER_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x7f, 0xff, 0xf0,

    /* U+0022 "\"" */
    0xde, 0xc0,

    /* U+0023 "#" */
    0x0, 0xd9, 0xb7, 0xff, 0xed, 0xbf, 0xff, 0x6c,
    0xd9, 0x0,

    /* U+0024 "$" */
    0x10, 0xcf, 0xff, 0xc3, 0xff, 0xc3, 0xff, 0xf3,
    0x8,

    /* U+0025 "%" */
    0x6c, 0xf8, 0x61, 0xc3, 0x86, 0x1f, 0x36,

    /* U+0026 "&" */
    0xfd, 0xfb, 0x37, 0xef, 0xd9, 0xbf, 0xff, 0xc,
    0x10,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0xff, 0x6d, 0xb6, 0xdf, 0x80,

    /* U+0029 ")" */
    0xfd, 0xb6, 0xdb, 0x7f, 0x80,

    /* U+002A "*" */
    0x77, 0xdc, 0x40,

    /* U+002B "+" */
    0x30, 0xc3, 0x3f, 0xfc, 0xc3, 0x0,

    /* U+002C "," */
    0xfc,

    /* U+002D "-" */
    0xff, 0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0xc, 0x18, 0x60, 0xc3, 0x6, 0x18, 0x30,

    /* U+0030 "0" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff,

    /* U+0031 "1" */
    0x7f, 0xff, 0xc0,

    /* U+0032 "2" */
    0xff, 0xf4, 0xff, 0xff, 0x2f, 0xff,

    /* U+0033 "3" */
    0x7d, 0xf0, 0xdf, 0x7c, 0x37, 0xdf,

    /* U+0034 "4" */
    0xcf, 0x3c, 0xff, 0xfc, 0x30, 0xc3, 0x8,

    /* U+0035 "5" */
    0xff, 0xfc, 0x3f, 0xfd, 0x3f, 0xff,

    /* U+0036 "6" */
    0xff, 0xfc, 0x3c, 0xff, 0x7f, 0xff,

    /* U+0037 "7" */
    0xff, 0xfc, 0xf3, 0xc, 0x30, 0xc3, 0x8,

    /* U+0038 "8" */
    0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff,

    /* U+0039 "9" */
    0xff, 0xfe, 0xff, 0x3c, 0x3f, 0xff,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xfc, 0x7f, 0xf8,

    /* U+003C "<" */
    0x26, 0xe7, 0x20,

    /* U+003D "=" */
    0xff, 0xff,

    /* U+003E ">" */
    0x46, 0x7e, 0x40,

    /* U+003F "?" */
    0xff, 0xfc, 0xcf, 0x3c, 0x3, 0xc,

    /* U+0040 "@" */
    0xfc, 0x63, 0x5b, 0xc2, 0x3f,

    /* U+0041 "A" */
    0xff, 0xfc, 0xff, 0xff, 0x3c, 0xf3, 0x4,

    /* U+0042 "B" */
    0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff,

    /* U+0043 "C" */
    0xff, 0xfc, 0xf0, 0xc7, 0x3f, 0xff,

    /* U+0044 "D" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3f, 0xff,

    /* U+0045 "E" */
    0xfb, 0xec, 0x3c, 0xf3, 0xf, 0xbe,

    /* U+0046 "F" */
    0xfb, 0xec, 0x3c, 0xf3, 0xc, 0x30, 0x80,

    /* U+0047 "G" */
    0xff, 0xfc, 0xb1, 0xcf, 0x3f, 0xff,

    /* U+0048 "H" */
    0x83, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcc, 0x10,

    /* U+0049 "I" */
    0xbf, 0xff, 0xc0,

    /* U+004A "J" */
    0x4, 0x30, 0xc3, 0xd, 0x3c, 0xff, 0xfc,

    /* U+004B "K" */
    0x83, 0xc, 0xb3, 0xdf, 0xff, 0xf3, 0xce, 0x0,

    /* U+004C "L" */
    0x8c, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+004D "M" */
    0xff, 0xff, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0x0, 0x40,

    /* U+004E "N" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0x8,

    /* U+004F "O" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff,

    /* U+0050 "P" */
    0xff, 0xfd, 0xff, 0xfb, 0xc, 0x30, 0x80,

    /* U+0051 "Q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff, 0x30, 0xc0,

    /* U+0052 "R" */
    0xff, 0xfc, 0xff, 0xff, 0xfc, 0xf3, 0x80,

    /* U+0053 "S" */
    0xff, 0xfc, 0xbf, 0xfd, 0x3f, 0xff,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x10,

    /* U+0055 "U" */
    0xb, 0x3c, 0xf3, 0xcf, 0x3c, 0xff, 0xfc,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xf7, 0x8c, 0x0,

    /* U+0057 "W" */
    0x0, 0x73, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0xff, 0xff, 0xc0,

    /* U+0058 "X" */
    0x83, 0x3c, 0xf3, 0xf9, 0xfc, 0xf3, 0xcc, 0x10,

    /* U+0059 "Y" */
    0x4, 0x34, 0xf3, 0xcf, 0xf3, 0xc3, 0xc, 0x30,
    0xc1,

    /* U+005A "Z" */
    0xff, 0xf4, 0xff, 0xff, 0x2f, 0xff,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xdf, 0x80,

    /* U+005C "\\" */
    0x60, 0xc0, 0xc1, 0x81, 0x83, 0x3, 0x6,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0x7f, 0x80,

    /* U+005E "^" */
    0xfc,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0060 "`" */
    0xfc,

    /* U+0061 "a" */
    0xff, 0xfc, 0xff, 0xff, 0x3c, 0xf3, 0x80,

    /* U+0062 "b" */
    0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff,

    /* U+0063 "c" */
    0xff, 0xfc, 0xf0, 0xc7, 0x3f, 0xff,

    /* U+0064 "d" */
    0xc3, 0xcf, 0xf7, 0xcf, 0x3c, 0xff, 0xfc,

    /* U+0065 "e" */
    0xfb, 0xec, 0x3c, 0xf3, 0xf, 0xbe,

    /* U+0066 "f" */
    0xfb, 0xec, 0x3c, 0xf3, 0xc, 0x30, 0x80,

    /* U+0067 "g" */
    0xff, 0xfc, 0xb1, 0xcf, 0x3f, 0xff,

    /* U+0068 "h" */
    0x7, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xce, 0x0,

    /* U+0069 "i" */
    0x7f, 0xff, 0xc0,

    /* U+006A "j" */
    0x2d, 0xb6, 0xdb, 0x6f, 0xf0,

    /* U+006B "k" */
    0x83, 0xc, 0xb3, 0xdf, 0xff, 0xf3, 0xce, 0x0,

    /* U+006C "l" */
    0x9b, 0x6d, 0xb7, 0xe0,

    /* U+006D "m" */
    0xff, 0xff, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0x80, 0x0,

    /* U+006E "n" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0x4,

    /* U+006F "o" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff,

    /* U+0070 "p" */
    0xff, 0xfc, 0xf7, 0xdb, 0xc, 0x30, 0x80,

    /* U+0071 "q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff, 0x30, 0xc0,

    /* U+0072 "r" */
    0xff, 0xfc, 0xff, 0xff, 0xfc, 0xf3, 0x80,

    /* U+0073 "s" */
    0xff, 0xfc, 0xbf, 0xfd, 0x3f, 0xff,

    /* U+0074 "t" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x20,

    /* U+0075 "u" */
    0x7, 0x3c, 0xf3, 0xcf, 0x3c, 0xff, 0xfc,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xf3, 0xcf, 0xf7, 0x8c, 0x0,

    /* U+0077 "w" */
    0x0, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0xff, 0xff, 0xc0,

    /* U+0078 "x" */
    0x7, 0x3c, 0xf3, 0x7f, 0xec, 0xf3, 0xce, 0x0,

    /* U+0079 "y" */
    0x4, 0x34, 0xf3, 0xcf, 0xf3, 0xc3, 0xc, 0x30,
    0xc1,

    /* U+007A "z" */
    0xff, 0xf4, 0xff, 0xff, 0x2f, 0xff,

    /* U+007B "{" */
    0x77, 0x66, 0x6e, 0xe6, 0x67, 0x70,

    /* U+007C "|" */
    0xff, 0xff,

    /* U+007D "}" */
    0xee, 0x66, 0x67, 0x76, 0x6e, 0xe0,

    /* U+007E "~" */
    0xff
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 94, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 25, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 41, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 42, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 47, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 52, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 55, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 103, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 64, .adv_w = 47, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 47, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 119, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 47, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 47, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 136, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 139, .adv_w = 75, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 141, .adv_w = 66, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 144, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 162, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 193, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 207, .adv_w = 47, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 225, .adv_w = 89, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 242, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 249, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 262, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 270, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 277, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 290, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 304, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 324, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 333, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 344, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 356, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 357, .adv_w = 103, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 359, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 360, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 367, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 399, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 413, .adv_w = 47, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 66, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 421, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 429, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 445, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 452, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 465, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 473, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 480, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 493, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 507, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 527, .adv_w = 103, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 536, .adv_w = 103, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 66, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 548, .adv_w = 47, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 66, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 556, .adv_w = 75, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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

extern const lv_font_t  lv_font_montserrat_12;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t cyber_12 = {
#else
lv_font_t cyber_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = & lv_font_montserrat_12,
#endif
    .user_data = NULL,
};



#endif /*#if CYBER_12*/

