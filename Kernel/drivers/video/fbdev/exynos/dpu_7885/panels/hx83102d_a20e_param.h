#ifndef __HX83102D_PARAM_H__
#define __HX83102D_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

struct i2c_rom_data {
	u8 addr;
	u8 val;
};

static const struct i2c_rom_data S2DPS01_INIT[] = {
	{0x1C, 0x10},
	{0x1D, 0x84},
	{0x1E, 0x78},
	{0x1F, 0x12},
	{0x20, 0x01},
	{0x21, 0x0F},
	{0x22, 0x00},
	{0x23, 0x00},
	{0x24, 0x00},
	{0x25, 0x01},
	{0x26, 0x02},
};

static const unsigned char SEQ_SET_B9_EXTC[] = {
	0xB9,
	0x83, 0x10, 0x2D
};

static const unsigned char SEQ_SET_B1_POWER[] = {
	0xB1,
	0x22, 0x44, 0x31, 0x31, 0x22, 0x34, 0x2F, 0x57,
	0x08, 0x08, 0x08, 
};


static const unsigned char SEQ_SET_B2_DISPLSAY[] = {
	0xB2,
	0x00, 0x00, 0x06, 0x18, 0x00, 0x0E, 0xAE, 0x40,
	0x00, 0x00, 0x00, 0x00, 0xF4, 0xA0,
};

static const unsigned char SEQ_SET_B4_TIMING[] = {
	0xB4,
	0x19, 0x59, 0x19, 0x59, 0x19, 0x59, 0x19, 0x59,
	0x06, 0xFF, 0x06, 0x20, 0x00, 0xFF,
};

static const unsigned char SEQ_SET_CC_PANEL_TYPE[] = {
	0xCC,
	0x02,
};

static const unsigned char SEQ_SET_D3_GIP[] = {
	0xD3,
	0x00, 0x00, 0x3C, 0x03, 0x00, 0x08, 0x00, 0x37,
	0x00, 0x33, 0x33, 0x08, 0x08, 0x00, 0x00, 0x32,
	0x10, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x05, 0x12, 0x00, 0x00,
};

static const unsigned char SEQ_SET_D5_GIP[] = {
	0xD5,
	0x18, 0x18, 0x18, 0x18, 0x39, 0x39, 0x18, 0x18,
	0x20, 0x21, 0x22, 0x23, 0x19, 0x19, 0x19, 0x19,
	0x04, 0x05, 0x06, 0x07, 0x00, 0x01, 0x02, 0x03,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_D6_GIP[] = {
	0xD6,
	0x18, 0x18, 0x19, 0x19, 0x39, 0x39, 0x18, 0x18,
	0x23, 0x22, 0x21, 0x20, 0x18, 0x18, 0x19, 0x19,
	0x03, 0x02, 0x01, 0x00, 0x07, 0x06, 0x05, 0x04,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_SET_E7_BANK0_TP[] = {
	0xE7,
	0xFF, 0x0F, 0x00, 0x00,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK1[] = {
	0xBD,
	0x01,
};

static const unsigned char SEQ_SET_E7_BANK1_TP[] = {
	0xE7,
	0x01,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK0[] = {
	0xBD,
	0x00,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK2[] = {
	0xBD,
	0x02,
};

static const unsigned char SEQ_SET_D8_BANK2[] = {
	0xD8,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xF0,
};

static const unsigned char SEQ_SET_BD_SWITCH_BANK3[] = {
	0xBD,
	0x03
};

static const unsigned char SEQ_SET_D8_BANK3[] = {
	0xD8,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA0, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xA0, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xA0, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xA0,
};

static const unsigned char SEQ_SET_E0_GAMMA[] = {
	0xE0,
	0x00, 0x01, 0x06, 0x0A, 0x0F, 0x11, 0x27, 0x2F,
	0x39, 0x39, 0x5C, 0x69, 0x76, 0x8D, 0x8A, 0x99,
	0xA9, 0xC4, 0xC6, 0x63, 0x6C, 0x77, 0x7F, 0x00,
	0x01, 0x06, 0x0A, 0x0F, 0x11, 0x27, 0x2F, 0x39,
	0x39, 0x5C, 0x69, 0x76, 0x8D, 0x98, 0xA7, 0xB1,
	0xC4, 0xC6, 0x63, 0x6C, 0x77, 0x7F,
};

static const unsigned char SEQ_SET_BA_DSI[] = {
	0xBA,
	0x70, 0x23, 0xA8, 0x8B, 0xB2, 0x80, 0x80, 0x01,
	0x10, 0x00, 0x00, 0x00, 0x08, 0x3D, 0x02, 0x77,
	0x04, 0x01, 0x00,
};

static const unsigned char SEQ_SET_CB_BANK1[] = {
	0xCB,
	0x01
};

static const unsigned char SEQ_SET_CB_BANK0[] = {
	0xCB,
	0x00, 0x53, 0x00, 0x02, 0x6C,
};

static const unsigned char SEQ_SET_BF_POWER[] = {
	0xBF,
	0xFC, 0x00, 0x24, 0x9E, 0xF6, 0x00, 0x5D,
};

static const unsigned char SEQ_SET_B4_BANK2[] = {
	0xB4,
	0x42, 0x00, 0x33, 0x00, 0x33, 0x88, 0xB3, 0x00,
};

static const unsigned char SEQ_SET_D1_TP[] = {
	0xD1,
	0x20, 0x01,
};

static const unsigned char SEQ_SET_B1_BANK2[] = {
	0xB1,
	0x7F, 0x03, 0xFF,
};

static const unsigned char SEQ_SET_D3_BANK1[] = {
	0xD3,
	0x01, 0x00, 0x39,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_SET_C9_CABC_PWM[] = {
	0xC9,
	0x04, 0x65, 0x90, 0x01,
};

static const unsigned char SEQ_HX83102D_BL[] = {
	0x51,
	0x00, 0x00,
};

static const unsigned char SEQ_HX83102D_BLON[] = {
	0x53,
	0x24,
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	22, 30, 38, 46, 55, 63, 71, 80, 88, 96, /* 1: 22 */
	104, 113, 121, 129, 138, 146, 154, 163, 171, 179,
	187, 196, 204, 212, 221, 229, 237, 246, 254, 262,
	270, 279, 287, 295, 304, 312, 320, 329, 337, 345,
	353, 362, 370, 378, 387, 395, 403, 412, 420, 428,
	436, 445, 453, 461, 470, 478, 486, 495, 503, 511,
	519, 528, 536, 544, 553, 561, 569, 578, 586, 594,
	602, 611, 619, 627, 636, 644, 652, 661, 669, 677,
	685, 694, 702, 710, 719, 727, 735, 744, 752, 760,
	768, 777, 785, 793, 802, 810, 818, 827, 835, 843,
	851, 860, 868, 876, 885, 893, 901, 910, 918, 926,
	934, 943, 951, 959, 968, 976, 984, 993, 1001, 1009,
	1017, 1026, 1034, 1042, 1051, 1059, 1067, 1076, 1088, 1101, /* 128: 1076 */
	1114, 1127, 1140, 1153, 1166, 1179, 1192, 1204, 1217, 1230,
	1243, 1256, 1269, 1282, 1295, 1308, 1321, 1333, 1346, 1359,
	1372, 1385, 1398, 1411, 1424, 1437, 1450, 1462, 1475, 1488,
	1501, 1514, 1527, 1540, 1553, 1566, 1579, 1591, 1604, 1617,
	1630, 1643, 1656, 1669, 1682, 1695, 1707, 1720, 1733, 1746,
	1759, 1772, 1785, 1798, 1811, 1824, 1836, 1849, 1862, 1875,
	1888, 1901, 1914, 1927, 1940, 1953, 1965, 1978, 1991, 2004,
	2017, 2030, 2043, 2056, 2069, 2082, 2094, 2107, 2120, 2133,
	2146, 2159, 2172, 2185, 2198, 2210, 2223, 2236, 2249, 2262,
	2275, 2288, 2301, 2314, 2327, 2339, 2352, 2365, 2378, 2391,
	2404, 2417, 2430, 2443, 2456, 2468, 2481, 2494, 2507, 2520,
	2533, 2546, 2559, 2572, 2585, 2597, 2610, 2623, 2636, 2649,
	2662, 2675, 2688, 2701, 2714, 2714, 2714, 2714, 2714, 2714, /* 255: 2714 */
	2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714,
	2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714,
	2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714,
	2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714, 2714,
	2714, 2714, 2714, 2714, 2714, 3120,
 };
#endif /* __HX83102D_PARAM_H__ */