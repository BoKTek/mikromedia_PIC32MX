/*******************************************************************************
  MPLAB Harmony Graphics Object Library Asset Source File

  File Name:
    gfx_assets.c

  Summary:
    Source file containing asset data for use with the MPLAB Harmony Graphics
	Object Library.

  Description:
    Source file containing asset data for use with the MPLAB Harmony Graphics
	Object Library.

    Created with MPLAB Harmony Version 2.06
*******************************************************************************/
// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END

#include "gfx/gfx_assets.h"

/*****************************************************************************
 Asset Manifest
 -------------------
 
 Fonts
 -------
    Arial
    Arial_Stor


 String Table
 -------
    stringTable
 
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Fonts
 
 - font lookup table data description -
1 byte - size of the address offset values in this table, 1-4 possible
1 byte - size of the address width values in this table, 1-2 possible
  for each glyph entry in lookup table:
    1-4 bytes - glyph data offset in bytes
    1-2 bytes - glyph raster width in pixels	
 
 *****************************************************************************/
uint8_t Arial_lookup_20[4] =
{
    0x01,0x01,0x00,0x07,
};

uint8_t Arial_lookup_2B[4] =
{
    0x01,0x01,0x1E,0x0F,
};

uint8_t Arial_lookup_2F[4] =
{
    0x01,0x01,0x5A,0x07,
};

uint8_t Arial_lookup_32_33[6] =
{
    0x01,0x01,0x78,0x0E,0xB4,0x0E,
};

uint8_t Arial_lookup_37[5] =
{
    0x02,0x01,0xF0,0x00,0x0E,
};

uint8_t Arial_lookup_43_44[8] =
{
    0x02,0x01,0x2C,0x01,0x13,0x86,0x01,0x13,
};

uint8_t Arial_lookup_49[5] =
{
    0x02,0x01,0xE0,0x01,0x06,
};

uint8_t Arial_lookup_4D_4E[8] =
{
    0x02,0x01,0xFE,0x01,0x15,0x58,0x02,0x13,
};

uint8_t Arial_lookup_50[5] =
{
    0x02,0x01,0xB2,0x02,0x11,
};

uint8_t Arial_lookup_58[5] =
{
    0x02,0x01,0x0C,0x03,0x11,
};

uint8_t Arial_lookup_61_62[8] =
{
    0x02,0x01,0x66,0x03,0x0E,0xA2,0x03,0x0F,
};

uint8_t Arial_lookup_64_65[8] =
{
    0x02,0x01,0xDE,0x03,0x0F,0x1A,0x04,0x0E,
};

uint8_t Arial_lookup_69[5] =
{
    0x02,0x01,0x56,0x04,0x06,
};

uint8_t Arial_lookup_6B[5] =
{
    0x02,0x01,0x74,0x04,0x0D,
};

uint8_t Arial_lookup_6D[5] =
{
    0x02,0x01,0xB0,0x04,0x16,
};

uint8_t Arial_lookup_6F[5] =
{
    0x02,0x01,0x0A,0x05,0x0E,
};

uint8_t Arial_lookup_72[5] =
{
    0x02,0x01,0x46,0x05,0x09,
};

uint8_t Arial_lookup_74_75[8] =
{
    0x02,0x01,0x82,0x05,0x07,0xA0,0x05,0x0E,
};


GFXU_FontGlyphIndexTable Arial_index_table =
{
	18, // range count
    {
	    /* 0x20 */
        {
		    1, // glyph count
		    0x20, // starting glyph id
		    0x20, // ending glyph id
		    Arial_lookup_20 // glyph lookup table
        },
	    /* 0x2B */
        {
		    1, // glyph count
		    0x2B, // starting glyph id
		    0x2B, // ending glyph id
		    Arial_lookup_2B // glyph lookup table
        },
	    /* 0x2F */
        {
		    1, // glyph count
		    0x2F, // starting glyph id
		    0x2F, // ending glyph id
		    Arial_lookup_2F // glyph lookup table
        },
	    /* 0x32-0x33 */
        {
		    2, // glyph count
		    0x32, // starting glyph id
		    0x33, // ending glyph id
		    Arial_lookup_32_33 // glyph lookup table
        },
	    /* 0x37 */
        {
		    1, // glyph count
		    0x37, // starting glyph id
		    0x37, // ending glyph id
		    Arial_lookup_37 // glyph lookup table
        },
	    /* 0x43-0x44 */
        {
		    2, // glyph count
		    0x43, // starting glyph id
		    0x44, // ending glyph id
		    Arial_lookup_43_44 // glyph lookup table
        },
	    /* 0x49 */
        {
		    1, // glyph count
		    0x49, // starting glyph id
		    0x49, // ending glyph id
		    Arial_lookup_49 // glyph lookup table
        },
	    /* 0x4D-0x4E */
        {
		    2, // glyph count
		    0x4D, // starting glyph id
		    0x4E, // ending glyph id
		    Arial_lookup_4D_4E // glyph lookup table
        },
	    /* 0x50 */
        {
		    1, // glyph count
		    0x50, // starting glyph id
		    0x50, // ending glyph id
		    Arial_lookup_50 // glyph lookup table
        },
	    /* 0x58 */
        {
		    1, // glyph count
		    0x58, // starting glyph id
		    0x58, // ending glyph id
		    Arial_lookup_58 // glyph lookup table
        },
	    /* 0x61-0x62 */
        {
		    2, // glyph count
		    0x61, // starting glyph id
		    0x62, // ending glyph id
		    Arial_lookup_61_62 // glyph lookup table
        },
	    /* 0x64-0x65 */
        {
		    2, // glyph count
		    0x64, // starting glyph id
		    0x65, // ending glyph id
		    Arial_lookup_64_65 // glyph lookup table
        },
	    /* 0x69 */
        {
		    1, // glyph count
		    0x69, // starting glyph id
		    0x69, // ending glyph id
		    Arial_lookup_69 // glyph lookup table
        },
	    /* 0x6B */
        {
		    1, // glyph count
		    0x6B, // starting glyph id
		    0x6B, // ending glyph id
		    Arial_lookup_6B // glyph lookup table
        },
	    /* 0x6D */
        {
		    1, // glyph count
		    0x6D, // starting glyph id
		    0x6D, // ending glyph id
		    Arial_lookup_6D // glyph lookup table
        },
	    /* 0x6F */
        {
		    1, // glyph count
		    0x6F, // starting glyph id
		    0x6F, // ending glyph id
		    Arial_lookup_6F // glyph lookup table
        },
	    /* 0x72 */
        {
		    1, // glyph count
		    0x72, // starting glyph id
		    0x72, // ending glyph id
		    Arial_lookup_72 // glyph lookup table
        },
	    /* 0x74-0x75 */
        {
		    2, // glyph count
		    0x74, // starting glyph id
		    0x75, // ending glyph id
		    Arial_lookup_74_75 // glyph lookup table
        },
    }
};
		
// 24 glyphs @ 1 bpp
const uint8_t Arial_data[1500] =
{
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x7F,0xF8,
    0x7F,0xF8,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x0C,0x0C,0x0C,0x0C,0x18,0x18,0x18,0x38,
    0x30,0x30,0x30,0x60,0x60,0x60,0x60,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x1F,0xE0,0x38,
    0x70,0x60,0x38,0x60,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x60,
    0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,0x0E,0x00,0x18,0x00,0x30,0x00,0x7F,
    0xF8,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x1F,0xE0,0x38,
    0x60,0x70,0x30,0x60,0x30,0x00,0x30,0x00,0x30,0x00,0xE0,0x07,0xC0,0x07,0xE0,
    0x00,0x30,0x00,0x18,0x00,0x18,0x00,0x18,0x60,0x18,0x70,0x38,0x30,0x70,0x1F,
    0xE0,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x00,
    0x10,0x00,0x30,0x00,0x60,0x00,0xC0,0x00,0xC0,0x01,0x80,0x01,0x80,0x03,0x00,
    0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x0C,
    0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x01,0xF8,0x00,0x07,0xFE,0x00,0x0E,0x07,0x00,0x18,0x01,0x80,0x30,0x00,0xC0,
    0x30,0x00,0x80,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,
    0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x80,0x30,0x00,0xC0,0x30,0x00,0x80,
    0x18,0x01,0x80,0x1E,0x07,0x00,0x07,0xFE,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x3F,0xF8,0x00,0x3F,0xFE,0x00,0x30,0x0F,0x00,0x30,0x03,0x80,0x30,0x01,0x80,
    0x30,0x01,0x80,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,
    0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x01,0x80,0x30,0x01,0x80,
    0x30,0x03,0x00,0x30,0x0F,0x00,0x3F,0xFE,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x38,0x00,0xE0,0x3C,0x01,0xE0,0x3C,0x01,0xE0,0x3C,0x01,0xE0,0x36,0x03,0x60,
    0x36,0x03,0x60,0x36,0x03,0x60,0x33,0x06,0x60,0x33,0x06,0x60,0x33,0x06,0x60,
    0x31,0x8C,0x60,0x31,0x8C,0x60,0x31,0x8C,0x60,0x30,0xD8,0x60,0x30,0xD8,0x60,
    0x30,0xD8,0x60,0x30,0x70,0x60,0x30,0x70,0x60,0x30,0x70,0x60,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x38,0x01,0x80,0x38,0x01,0x80,0x3C,0x01,0x80,0x3E,0x01,0x80,0x36,0x01,0x80,
    0x33,0x01,0x80,0x33,0x81,0x80,0x31,0x81,0x80,0x30,0xC1,0x80,0x30,0xE1,0x80,
    0x30,0x61,0x80,0x30,0x31,0x80,0x30,0x39,0x80,0x30,0x19,0x80,0x30,0x0D,0x80,
    0x30,0x0F,0x80,0x30,0x07,0x80,0x30,0x03,0x80,0x30,0x03,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x3F,0xF8,0x00,0x3F,0xFE,0x00,0x30,0x0E,0x00,0x30,0x07,0x00,0x30,0x03,0x00,
    0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x07,0x00,0x30,0x0E,0x00,0x3F,0xFC,0x00,
    0x3F,0xF8,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,
    0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x70,0x07,0x00,0x38,0x0E,0x00,0x1C,0x1C,0x00,0x1C,0x18,0x00,0x0E,0x38,0x00,
    0x07,0x70,0x00,0x03,0x60,0x00,0x03,0xE0,0x00,0x01,0xC0,0x00,0x01,0xC0,0x00,
    0x03,0x60,0x00,0x07,0x70,0x00,0x06,0x30,0x00,0x0E,0x38,0x00,0x1C,0x1C,0x00,
    0x18,0x0C,0x00,0x38,0x0E,0x00,0x70,0x07,0x00,0xE0,0x03,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x3F,0xE0,0x30,0x70,0x60,0x30,0x00,0x30,
    0x01,0xF0,0x1F,0xF0,0x3E,0x30,0x70,0x30,0x60,0x30,0x60,0x70,0x70,0xF0,0x3F,
    0xB0,0x1F,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x30,
    0x00,0x30,0x00,0x30,0x00,0x33,0xC0,0x3F,0xF0,0x3C,0x38,0x38,0x18,0x30,0x0C,
    0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x38,0x18,0x3C,0x38,0x3F,
    0xF0,0x33,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,
    0x18,0x00,0x18,0x00,0x18,0x07,0x98,0x1F,0xF8,0x38,0x78,0x30,0x38,0x60,0x18,
    0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x30,0x38,0x38,0x78,0x1F,
    0xF8,0x07,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x1F,0xE0,0x38,0x70,0x30,0x30,0x60,0x18,
    0x60,0x18,0x7F,0xF8,0x7F,0xF8,0x60,0x00,0x60,0x00,0x30,0x18,0x38,0x30,0x1F,
    0xE0,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x30,
    0x00,0x30,0x00,0x30,0x00,0x30,0x38,0x30,0x70,0x30,0xE0,0x31,0xC0,0x33,0x80,
    0x37,0x00,0x3F,0x80,0x3B,0x80,0x31,0xC0,0x31,0xC0,0x30,0xE0,0x30,0x70,0x30,
    0x30,0x30,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x33,0xC3,0xC0,0x37,0xEF,0xE0,0x3C,0x7C,0x70,0x38,0x38,0x30,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x1F,0xE0,0x38,0x70,0x30,0x30,0x60,0x18,
    0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x60,0x18,0x30,0x30,0x38,0x70,0x1F,
    0xE0,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x37,0x80,0x3F,0x80,0x38,0x00,0x38,0x00,0x30,0x00,
    0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,
    0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0xFE,0xFE,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3E,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
    0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x70,0x38,0xF0,0x1F,
    0xB0,0x0F,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

GFXU_FontAsset Arial =
{
	{
        GFXU_ASSET_TYPE_FONT, // asset type
	    GFXU_ASSET_LOCATION_ID_INTERNAL, // data location id
	    (void*)Arial_data, // data address pointer
	    1500, // data size
    },	
	30, // font height
	24, // font max ascent
	6, // font max descent
	6, // font baseline
	GFXU_FONT_BPP_1, // bits per pixel
	&Arial_index_table // glyph index table
};
		
uint8_t Arial_Stor_lookup_20[4] =
{
    0x01,0x01,0x00,0x0D,
};

uint8_t Arial_Stor_lookup_4C[5] =
{
    0x02,0x01,0x70,0x00,0x1D,
};

uint8_t Arial_Stor_lookup_4F[5] =
{
    0x02,0x01,0x50,0x01,0x25,
};

uint8_t Arial_Stor_lookup_66_69[14] =
{
    0x02,0x01,0x68,0x02,0x10,0xD8,0x02,0x1D,0xB8,0x03,0x1D,0x98,0x04,0x0D,
};

uint8_t Arial_Stor_lookup_6E[5] =
{
    0x02,0x01,0x08,0x05,0x1D,
};

uint8_t Arial_Stor_lookup_74[5] =
{
    0x02,0x01,0xE8,0x05,0x10,
};


GFXU_FontGlyphIndexTable Arial_Stor_index_table =
{
	6, // range count
    {
	    /* 0x20 */
        {
		    1, // glyph count
		    0x20, // starting glyph id
		    0x20, // ending glyph id
		    Arial_Stor_lookup_20 // glyph lookup table
        },
	    /* 0x4C */
        {
		    1, // glyph count
		    0x4C, // starting glyph id
		    0x4C, // ending glyph id
		    Arial_Stor_lookup_4C // glyph lookup table
        },
	    /* 0x4F */
        {
		    1, // glyph count
		    0x4F, // starting glyph id
		    0x4F, // ending glyph id
		    Arial_Stor_lookup_4F // glyph lookup table
        },
	    /* 0x66-0x69 */
        {
		    4, // glyph count
		    0x66, // starting glyph id
		    0x69, // ending glyph id
		    Arial_Stor_lookup_66_69 // glyph lookup table
        },
	    /* 0x6E */
        {
		    1, // glyph count
		    0x6E, // starting glyph id
		    0x6E, // ending glyph id
		    Arial_Stor_lookup_6E // glyph lookup table
        },
	    /* 0x74 */
        {
		    1, // glyph count
		    0x74, // starting glyph id
		    0x74, // ending glyph id
		    Arial_Stor_lookup_74 // glyph lookup table
        },
    }
};
		
// 9 glyphs @ 1 bpp
const uint8_t Arial_Stor_data[1624] =
{
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,
    0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,
    0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,
    0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,
    0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,
    0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,
    0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,
    0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xE0,
    0x00,0x00,0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,
    0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFE,0x00,
    0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x7F,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xF8,
    0x00,0x01,0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xFE,0x00,0x07,0xFE,0x03,0xFF,
    0x00,0x07,0xF8,0x00,0xFF,0x00,0x0F,0xF0,0x00,0x7F,0x80,0x0F,0xE0,0x00,0x3F,
    0x80,0x1F,0xE0,0x00,0x3F,0xC0,0x1F,0xC0,0x00,0x1F,0xC0,0x1F,0xC0,0x00,0x1F,
    0xC0,0x3F,0xC0,0x00,0x1F,0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0x80,0x00,0x0F,
    0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0x80,0x00,0x0F,
    0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0x80,0x00,0x0F,
    0xE0,0x3F,0x80,0x00,0x0F,0xE0,0x3F,0xC0,0x00,0x1F,0xE0,0x1F,0xC0,0x00,0x1F,
    0xC0,0x1F,0xC0,0x00,0x1F,0xC0,0x1F,0xE0,0x00,0x3F,0xC0,0x0F,0xE0,0x00,0x3F,
    0x80,0x0F,0xF0,0x00,0x7F,0x80,0x07,0xFC,0x00,0xFF,0x00,0x07,0xFF,0x03,0xFF,
    0x00,0x03,0xFF,0xFF,0xFE,0x00,0x01,0xFF,0xFF,0xFC,0x00,0x00,0xFF,0xFF,0xF8,
    0x00,0x00,0x7F,0xFF,0xF0,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x03,0xFE,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x07,0xFF,0x0F,0xFF,0x0F,
    0xFF,0x1F,0xFF,0x1F,0xE0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0xFF,0xFE,0xFF,0xFE,
    0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x01,0xFF,
    0x8F,0xC0,0x03,0xFF,0xEF,0xC0,0x07,0xFF,0xFF,0xC0,0x0F,0xFF,0xFF,0xC0,0x0F,
    0xF0,0xFF,0xC0,0x1F,0xE0,0x7F,0xC0,0x1F,0xC0,0x3F,0xC0,0x1F,0xC0,0x3F,0xC0,
    0x3F,0x80,0x1F,0xC0,0x3F,0x80,0x1F,0xC0,0x3F,0x80,0x1F,0xC0,0x3F,0x80,0x1F,
    0xC0,0x3F,0x80,0x1F,0xC0,0x3F,0x80,0x1F,0xC0,0x3F,0x80,0x1F,0xC0,0x3F,0x80,
    0x1F,0xC0,0x3F,0x80,0x1F,0xC0,0x1F,0xC0,0x3F,0xC0,0x1F,0xC0,0x3F,0xC0,0x1F,
    0xE0,0x7F,0xC0,0x0F,0xF0,0xFF,0xC0,0x0F,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xC0,
    0x03,0xFF,0xFF,0xC0,0x01,0xFF,0x9F,0xC0,0x00,0x7F,0x1F,0xC0,0x00,0x00,0x1F,
    0xC0,0x00,0x00,0x1F,0xC0,0x1E,0x00,0x1F,0xC0,0x1F,0xC0,0x3F,0x80,0x1F,0xE0,
    0x7F,0x80,0x0F,0xFF,0xFF,0x80,0x0F,0xFF,0xFF,0x00,0x07,0xFF,0xFE,0x00,0x03,
    0xFF,0xFC,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,0x00,0x00,0x1F,0xC0,0x00,0x00,0x1F,
    0xC0,0x00,0x00,0x1F,0xC0,0x00,0x00,0x1F,0xC0,0x00,0x00,0x1F,0xC0,0x00,0x00,
    0x1F,0xC0,0x00,0x00,0x1F,0xC0,0x00,0x00,0x1F,0xC1,0xF8,0x00,0x1F,0xCF,0xFE,
    0x00,0x1F,0xDF,0xFF,0x00,0x1F,0xFF,0xFF,0x80,0x1F,0xFF,0xFF,0x80,0x1F,0xF8,
    0x7F,0x80,0x1F,0xF0,0x3F,0xC0,0x1F,0xE0,0x1F,0xC0,0x1F,0xE0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x03,0xF8,0x00,0x1F,0x8F,0xFE,0x00,0x1F,0x9F,0xFF,0x00,0x1F,0xBF,0xFF,0x80,
    0x1F,0xFF,0xFF,0x80,0x1F,0xF8,0x7F,0xC0,0x1F,0xF0,0x3F,0xC0,0x1F,0xE0,0x1F,
    0xC0,0x1F,0xE0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x40,0x01,0xC0,0x03,0xC0,0x0F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,0xFF,0xFE,
    0xFF,0xFE,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,
    0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,
    0x1F,0xC0,0x1F,0xE2,0x1F,0xFE,0x0F,0xFE,0x0F,0xFE,0x07,0xFE,0x01,0xFC,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,
};

GFXU_FontAsset Arial_Stor =
{
	{
        GFXU_ASSET_TYPE_FONT, // asset type
	    GFXU_ASSET_LOCATION_ID_INTERNAL, // data location id
	    (void*)Arial_Stor_data, // data address pointer
	    1624, // data size
    },	
	56, // font height
	45, // font max ascent
	10, // font max descent
	11, // font baseline
	GFXU_FONT_BPP_1, // bits per pixel
	&Arial_Stor_index_table // glyph index table
};
		


/*****************************************************************************
 * SECTION:  Strings
 
 - String table data format description -

 2 bytes - number of unique string values
 
 for each string value:
   2 bytes - size of the string in bytes
   n bytes - character code point data, 1-4 bytes each character per encoding	 
 *****************************************************************************/
// 1 language, 3 unique string values, ASCII encoding
uint8_t stringTable_data[59] =
{
    0x03,0x00,0x09,0x00,0x4C,0x69,0x67,0x68,0x74,0x20,0x4F,0x66,0x66,0x08,0x00,
    0x4C,0x69,0x67,0x68,0x74,0x20,0x4F,0x6E,0x22,0x00,0x75,0x4E,0x61,0x62,0x74,
    0x6F,0x20,0x44,0x65,0x6D,0x6F,0x20,0x2F,0x20,0x6D,0x69,0x6B,0x72,0x6F,0x6D,
    0x65,0x64,0x69,0x61,0x2B,0x20,0x50,0x49,0x43,0x33,0x32,0x4D,0x58,0x37,
};
	
/*****************************************************************************
  - String index table data format description -

 2 bytes - number of strings in the string table
 1 byte - number of languages in the string table
 1 byte - size of the string indicies, equals 2 if there are more than 254
          strings
		  
 for each string in table:
    for each language in table:
	    1-2 bytes - string data table entry	 
 *****************************************************************************/
// Lookup table for associating string and language IDs to string data.
uint8_t stringIndexTable_data[7] =
{
    0x03,0x00,0x01,0x01,0x00,0x01,0x02,
};
	
GFXU_FontAsset* fontList[2] =
{
	&Arial,
	&Arial_Stor,
};

/*****************************************************************************
  - Font index table data format description -

 2 bytes - number of strings in the string table
 1 byte - number of languages in the string table
		  
 for each string in table:
    for each language in table:
	    1 byte - the font to use for the string	 
		
 id = 0xFF if no font association
 *****************************************************************************/
// Lookup table for associating strings, languages, and fonts
uint8_t fontIndexTable_data[6] =
{
    0x03,0x00,0x01,0x01,0x01,0x00,
};
	
GFXU_StringTableAsset stringTable =
{
	{
        GFXU_ASSET_TYPE_STRINGTABLE, // asset type
	    GFXU_ASSET_LOCATION_ID_INTERNAL, // data location id
	    (void*)stringTable_data, // data address pointer
	    59, // data size
    },	
	1, // language count
	3, // string count
    stringIndexTable_data, // font lookup table
    fontList, // font lookup table
    fontIndexTable_data, // font index table
	GFXU_STRING_ENCODING_ASCII // encoding standard
};
		
