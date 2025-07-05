/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font Neon Energy x.ttf --range 32-127 --format lvgl -o neon_12.c
 ******************************************************************************/

#include "lvgl.h"

#ifndef NEON_12
#define NEON_12 1
#endif

#if NEON_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xcf,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6d, 0xff, 0xfb, 0x66, 0xdf, 0xff, 0xb6,

    /* U+0024 "$" */
    0x39, 0xff, 0xfe, 0xf, 0xff, 0xc1, 0xff, 0xfe,
    0x70,

    /* U+0025 "%" */
    0xc7, 0x98, 0x60, 0xc3, 0x6, 0x19, 0xe3,

    /* U+0026 "&" */
    0xfe, 0xfe, 0xee, 0x7c, 0x7c, 0xee, 0xff, 0xff,
    0x6,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+0029 ")" */
    0xff, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+002A "*" */
    0x7f, 0x70,

    /* U+002B "+" */
    0x30, 0x63, 0xff, 0xf3, 0x6, 0x0,

    /* U+002C "," */
    0xfc,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0x18, 0x70, 0xc3, 0x86, 0x18, 0x30,

    /* U+0030 "0" */
    0xff, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0031 "1" */
    0xff, 0xff,

    /* U+0032 "2" */
    0xff, 0xfc, 0x1f, 0xff, 0xf8, 0x3f, 0xff,

    /* U+0033 "3" */
    0xff, 0xfc, 0x1f, 0xff, 0xe0, 0xff, 0xff,

    /* U+0034 "4" */
    0xc7, 0x8f, 0x1f, 0xff, 0xe0, 0xc1, 0x83,

    /* U+0035 "5" */
    0xff, 0xff, 0x7, 0xff, 0xe0, 0xff, 0xff,

    /* U+0036 "6" */
    0xff, 0xff, 0x7, 0xff, 0xf8, 0xff, 0xff,

    /* U+0037 "7" */
    0xff, 0xfc, 0x18, 0x30, 0x60, 0xc1, 0x83,

    /* U+0038 "8" */
    0xff, 0xff, 0xbb, 0xe7, 0xdd, 0xff, 0xff,

    /* U+0039 "9" */
    0xff, 0xff, 0x1f, 0xff, 0xe0, 0xff, 0xff,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0xfc, 0xf, 0xf8,

    /* U+003C "<" */
    0x13, 0x7e, 0xe7, 0x31,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x8c, 0xe7, 0x7e, 0xc8,

    /* U+003F "?" */
    0xff, 0xfc, 0x39, 0xf3, 0xe0, 0xc, 0x18,

    /* U+0040 "@" */
    0xff, 0xff, 0xdf, 0xbf, 0xff, 0xff, 0xff,

    /* U+0041 "A" */
    0xff, 0xff, 0x1f, 0xff, 0xf8, 0xf1, 0xe3,

    /* U+0042 "B" */
    0xff, 0xff, 0x3e, 0xed, 0xd9, 0xff, 0xff,

    /* U+0043 "C" */
    0xff, 0xff, 0x6, 0xc, 0x18, 0x3f, 0xff,

    /* U+0044 "D" */
    0xff, 0xfc, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0045 "E" */
    0xff, 0xff, 0x7, 0xef, 0x98, 0x3f, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0x7, 0xef, 0x98, 0x30, 0x60,

    /* U+0047 "G" */
    0xff, 0xff, 0x6, 0xfd, 0xf8, 0xff, 0xff,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xff, 0xf8, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xff, 0xff,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xff, 0xff,

    /* U+004B "K" */
    0xc7, 0x8f, 0x1e, 0xed, 0xd9, 0xf1, 0xe1, 0xc0,
    0x80,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x3f, 0xff,

    /* U+004D "M" */
    0xff, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,

    /* U+004E "N" */
    0x81, 0x3, 0x1f, 0x3f, 0x7f, 0xff, 0xef, 0xcf,
    0x8c, 0x8, 0x10,

    /* U+004F "O" */
    0xff, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0050 "P" */
    0xff, 0xff, 0x3e, 0xec, 0x18, 0x30, 0x60, 0xc0,
    0x80,

    /* U+0051 "Q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff, 0x30, 0x80,
    0x0,

    /* U+0052 "R" */
    0xff, 0xff, 0x3e, 0xed, 0xf9, 0xf1, 0xe0, 0x40,
    0x0,

    /* U+0053 "S" */
    0xff, 0xff, 0x7, 0xff, 0xe0, 0xff, 0xff,

    /* U+0054 "T" */
    0xff, 0xfc, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x10,
    0x0,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0056 "V" */
    0x2, 0x7, 0x1e, 0x7d, 0xdf, 0x3e, 0x78, 0xe1,
    0x82, 0x4, 0x0,

    /* U+0057 "W" */
    0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff, 0xff,

    /* U+0058 "X" */
    0xc7, 0x8f, 0x1b, 0xe7, 0xd8, 0xf1, 0xe3,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x78, 0xc3, 0xc, 0x30, 0x80,

    /* U+005A "Z" */
    0xff, 0xf8, 0x71, 0xc3, 0x8e, 0x1f, 0xff,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0x60, 0xc0, 0xc1, 0xc1, 0x83, 0x83, 0x3,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x3f, 0xf0,

    /* U+005E "^" */
    0xfc,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xfc,

    /* U+0061 "a" */
    0xff, 0xff, 0x1f, 0xff, 0xf8, 0xf1, 0xe3,

    /* U+0062 "b" */
    0xff, 0xff, 0x3e, 0xed, 0xd9, 0xff, 0xff,

    /* U+0063 "c" */
    0xff, 0xff, 0x6, 0xc, 0x18, 0x3f, 0xff,

    /* U+0064 "d" */
    0xff, 0xfc, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0065 "e" */
    0xff, 0xfc, 0x7, 0xef, 0x98, 0x3f, 0xff,

    /* U+0066 "f" */
    0xff, 0xff, 0x7, 0xef, 0x98, 0x30, 0x60,

    /* U+0067 "g" */
    0xff, 0xff, 0x6, 0xfd, 0xf8, 0xff, 0xff,

    /* U+0068 "h" */
    0x81, 0x83, 0x1e, 0x3c, 0x7f, 0xff, 0xe3, 0xc7,
    0x8c, 0x18, 0x10,

    /* U+0069 "i" */
    0xff, 0xff,

    /* U+006A "j" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xff, 0xff,

    /* U+006B "k" */
    0xc7, 0x8f, 0x1e, 0xed, 0xd9, 0xf1, 0xe1, 0xc1,
    0x0,

    /* U+006C "l" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x3f, 0xff,

    /* U+006D "m" */
    0xff, 0xff, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,

    /* U+006E "n" */
    0x81, 0x3, 0x1f, 0x3f, 0x7f, 0xff, 0xef, 0xcf,
    0x8c, 0x8, 0x10,

    /* U+006F "o" */
    0xff, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0070 "p" */
    0xff, 0xff, 0x3e, 0xec, 0x18, 0x30, 0x60, 0xc1,
    0x0,

    /* U+0071 "q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3f, 0xff, 0x30, 0x80,
    0x0,

    /* U+0072 "r" */
    0xff, 0xff, 0x3e, 0xed, 0xf9, 0xf1, 0xe0, 0x80,
    0x0,

    /* U+0073 "s" */
    0xff, 0xff, 0x7, 0xff, 0xe0, 0xff, 0xff,

    /* U+0074 "t" */
    0xff, 0xfc, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x20,
    0x0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xff,

    /* U+0076 "v" */
    0x81, 0x83, 0x9b, 0x37, 0x67, 0xc7, 0x87, 0xe,
    0xc, 0x8, 0x10,

    /* U+0077 "w" */
    0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xff, 0xff,

    /* U+0078 "x" */
    0x81, 0x83, 0x1e, 0x3c, 0x6f, 0x9f, 0x63, 0xc7,
    0x8c, 0x18, 0x10,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xde, 0x78, 0xc3, 0xc, 0x30, 0x40,

    /* U+007A "z" */
    0xff, 0xf8, 0x71, 0xc3, 0x8e, 0x1f, 0xff,

    /* U+007B "{" */
    0x7b, 0xd8, 0xc6, 0x73, 0x8c, 0x63, 0xde,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf7, 0x8c, 0x63, 0x1c, 0xe6, 0x37, 0xbc,

    /* U+007E "~" */
    0xff, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 72, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 48, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 96, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 21, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 132, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 37, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 38, .adv_w = 60, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 44, .adv_w = 60, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 72, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 52, .adv_w = 120, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 58, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 59, .adv_w = 120, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 61, .adv_w = 48, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 48, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 48, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 48, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 139, .adv_w = 78, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 120, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 148, .adv_w = 78, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 48, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 240, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 266, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 291, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 300, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 316, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 334, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 357, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 60, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 370, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 60, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 383, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 384, .adv_w = 120, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 385, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 386, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 446, .adv_w = 48, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 464, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 490, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 506, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 515, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 524, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 540, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 558, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 577, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 585, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 72, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 599, .adv_w = 36, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 602, .adv_w = 72, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 609, .adv_w = 120, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
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
const lv_font_t neon_12 = {
#else
lv_font_t neon_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
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
    .fallback = & lv_font_montserrat_12,
#endif
    .user_data = NULL,
};



#endif /*#if NEON_12*/

