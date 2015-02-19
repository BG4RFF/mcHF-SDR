/*
    created with FontEditor written by H. Reddmann
    HaReddmann at t-online dot de

    File Name           : eng8x8.h
    Date                : 22/01/2009
    Font size in bytes  : 0x05E6, 1510
    Font width          : 7
    Font height         : 8
    Font first char     : 0x01
    Font last char      : 0xFE
    Font bits per pixel : 1
    Font is compressed  : false

    The font data are defined as

    struct _FONT_ {
     // common shared fields
       uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
       uint8_t    font_Width_in_Pixel_for_fixed_drawing;
       uint8_t    font_Height_in_Pixel_for_all_Characters;
       uint8_t    font_Bits_per_Pixels;
                    // if MSB are set then font is a compressed font
       uint8_t    font_First_Char;
       uint8_t    font_Last_Char;
       uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
                    // for each character the separate width in pixels,
                    // characters < 128 have an implicit virtual right empty row
                    // characters with font_Char_Widths[] == 0 are undefined

     // if compressed font then additional fields
       uint8_t    font_Byte_Padding;
                    // each Char in the table are aligned in size to this value
       uint8_t    font_RLE_Table[3];
                    // Run Length Encoding Table for compression
       uint8_t    font_Char_Size_in_Bytes[font_Last_Char - font_First_Char +1];
                    // for each char the size in (bytes / font_Byte_Padding) are stored,
                    // this get us the table to seek to the right beginning of each char
                    // in the font_data[].

     // for compressed and uncompressed fonts
       uint8_t    font_data[];
                    // bit field of all characters
    }
*/

#ifndef eng8x8_H
#define eng8x8_H

#define eng8x8_WIDTH 7
#define eng8x8_HEIGHT 8

static uchar eng8x8[] = {
    0x05, 0xE6, 0x07, 0x08, 0x01, 0x01, 0xFE,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x06, 0x04, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 
    0x04, 0x05, 0x03, 0x05, 0x05, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 
    0x03, 0x05, 0x05, 0x04, 0x05, 0x05, 0x02, 0x02, 0x02, 0x05, 0x05, 0x02, 0x05, 0x02, 0x05, 0x05, 
    0x03, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x02, 0x04, 0x05, 0x04, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x03, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x03, 0x05, 0x03, 0x05, 0x06, 0x02, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x05, 0x04, 0x02, 0x04, 0x04, 0x02, 0x05, 0x04, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x04, 0x04, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x01, 0x04, 0x04, 0x05, 0x06, 
    0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x04, 0x04, 0x05, 0x06, 0x04, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 
    0x06, 0x06, 0x06, 0x06, 0x04, 0x05, 0x05, 0x05, 0x04, 0x06, 0x06, 0x06, 0x04, 0x05, 0x06, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x05, 0x04, 0x05, 
    0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x03, 0x03, 0x04, 0x04, 0x05, 
    0x3E, 0x45, 0x51, 0x45, 0x3E, 0x3E, 0x6B, 0x6F, 0x6B, 0x3E, 0x1C, 0x3E, 0x7C, 0x3E, 0x1C, 0x18, 
    0x3C, 0x7E, 0x3C, 0x18, 0x30, 0x36, 0x7F, 0x36, 0x30, 0x18, 0x5C, 0x7E, 0x5C, 0x18, 0x18, 0x18, 
    0xFF, 0xFF, 0xE7, 0xE7, 0xFF, 0xFF, 0x3C, 0x24, 0x24, 0x3C, 0xFF, 0xC3, 0xDB, 0xDB, 0xC3, 0xFF, 
    0x30, 0x48, 0x4A, 0x36, 0x0E, 0x06, 0x29, 0x79, 0x29, 0x06, 0x60, 0x70, 0x3F, 0x02, 0x04, 0x60, 
    0x7E, 0x0A, 0x35, 0x3F, 0x2A, 0x1C, 0x36, 0x1C, 0x2A, 0x7F, 0x3E, 0x1C, 0x08, 0x08, 0x1C, 0x3E, 
    0x7F, 0x14, 0x36, 0x7F, 0x36, 0x14, 0x5F, 0x00, 0x5F, 0x06, 0x09, 0x7F, 0x01, 0x7F, 0x22, 0x4D, 
    0x55, 0x59, 0x22, 0x60, 0x60, 0x60, 0x60, 0x14, 0xB6, 0xFF, 0xB6, 0x14, 0x04, 0x06, 0x7F, 0x06, 
    0x04, 0x10, 0x30, 0x7F, 0x30, 0x10, 0x08, 0x08, 0x3E, 0x1C, 0x08, 0x08, 0x1C, 0x3E, 0x08, 0x08, 
    0x78, 0x40, 0x40, 0x40, 0x40, 0x08, 0x3E, 0x08, 0x3E, 0x08, 0x30, 0x3C, 0x3F, 0x3C, 0x30, 0x03, 
    0x0F, 0x3F, 0x0F, 0x03, 0x00, 0x06, 0x5F, 0x06, 0x07, 0x03, 0x00, 0x07, 0x03, 0x24, 0x7E, 0x24, 
    0x7E, 0x24, 0x24, 0x2B, 0x6A, 0x12, 0x63, 0x13, 0x08, 0x64, 0x63, 0x36, 0x49, 0x56, 0x20, 0x50, 
    0x07, 0x03, 0x3E, 0x41, 0x41, 0x3E, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x08, 0x08, 0x3E, 0x08, 0x08, 
    0xE0, 0x60, 0x08, 0x08, 0x08, 0x08, 0x08, 0x60, 0x60, 0x20, 0x10, 0x08, 0x04, 0x02, 0x3E, 0x51, 
    0x49, 0x45, 0x3E, 0x42, 0x7F, 0x40, 0x62, 0x51, 0x49, 0x49, 0x46, 0x22, 0x49, 0x49, 0x49, 0x36, 
    0x18, 0x14, 0x12, 0x7F, 0x10, 0x2F, 0x49, 0x49, 0x49, 0x31, 0x3C, 0x4A, 0x49, 0x49, 0x30, 0x01, 
    0x71, 0x09, 0x05, 0x03, 0x36, 0x49, 0x49, 0x49, 0x36, 0x06, 0x49, 0x49, 0x29, 0x1E, 0x6C, 0x6C, 
    0xEC, 0x6C, 0x08, 0x14, 0x22, 0x41, 0x24, 0x24, 0x24, 0x24, 0x24, 0x41, 0x22, 0x14, 0x08, 0x02, 
    0x01, 0x59, 0x09, 0x06, 0x3E, 0x41, 0x5D, 0x55, 0x1E, 0x7E, 0x11, 0x11, 0x11, 0x7E, 0x7F, 0x49, 
    0x49, 0x49, 0x36, 0x3E, 0x41, 0x41, 0x41, 0x22, 0x7F, 0x41, 0x41, 0x41, 0x3E, 0x7F, 0x49, 0x49, 
    0x49, 0x41, 0x7F, 0x09, 0x09, 0x09, 0x01, 0x3E, 0x41, 0x49, 0x49, 0x7A, 0x7F, 0x08, 0x08, 0x08, 
    0x7F, 0x41, 0x7F, 0x41, 0x30, 0x40, 0x40, 0x40, 0x3F, 0x7F, 0x08, 0x14, 0x22, 0x41, 0x7F, 0x40, 
    0x40, 0x40, 0x40, 0x7F, 0x02, 0x04, 0x02, 0x7F, 0x7F, 0x02, 0x04, 0x08, 0x7F, 0x3E, 0x41, 0x41, 
    0x41, 0x3E, 0x7F, 0x09, 0x09, 0x09, 0x06, 0x3E, 0x41, 0x51, 0x21, 0x5E, 0x7F, 0x09, 0x09, 0x19, 
    0x66, 0x26, 0x49, 0x49, 0x49, 0x32, 0x01, 0x01, 0x7F, 0x01, 0x01, 0x3F, 0x40, 0x40, 0x40, 0x3F, 
    0x1F, 0x20, 0x40, 0x20, 0x1F, 0x3F, 0x40, 0x3C, 0x40, 0x3F, 0x63, 0x14, 0x08, 0x14, 0x63, 0x07, 
    0x08, 0x70, 0x08, 0x07, 0x71, 0x49, 0x45, 0x43, 0x7F, 0x41, 0x41, 0x02, 0x04, 0x08, 0x10, 0x20, 
    0x41, 0x41, 0x7F, 0x04, 0x02, 0x01, 0x02, 0x04, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x03, 0x07, 
    0x20, 0x54, 0x54, 0x54, 0x78, 0x7F, 0x44, 0x44, 0x44, 0x38, 0x38, 0x44, 0x44, 0x44, 0x28, 0x38, 
    0x44, 0x44, 0x44, 0x7F, 0x38, 0x54, 0x54, 0x54, 0x08, 0x08, 0x7E, 0x09, 0x09, 0x18, 0xA4, 0xA4, 
    0xA4, 0x7C, 0x7F, 0x04, 0x04, 0x78, 0x7D, 0x40, 0x40, 0x80, 0x84, 0x7D, 0x7F, 0x10, 0x28, 0x44, 
    0x7F, 0x40, 0x7C, 0x04, 0x18, 0x04, 0x78, 0x7C, 0x04, 0x04, 0x78, 0x38, 0x44, 0x44, 0x44, 0x38, 
    0xFC, 0x44, 0x44, 0x44, 0x38, 0x38, 0x44, 0x44, 0x44, 0xFC, 0x44, 0x78, 0x44, 0x04, 0x08, 0x08, 
    0x54, 0x54, 0x54, 0x20, 0x04, 0x3E, 0x44, 0x24, 0x3C, 0x40, 0x20, 0x7C, 0x1C, 0x20, 0x40, 0x20, 
    0x1C, 0x3C, 0x60, 0x30, 0x60, 0x3C, 0x6C, 0x10, 0x10, 0x6C, 0x9C, 0xA0, 0x60, 0x3C, 0x64, 0x54, 
    0x54, 0x4C, 0x08, 0x3E, 0x41, 0x41, 0x77, 0x41, 0x41, 0x3E, 0x08, 0x02, 0x01, 0x02, 0x01, 0x3C, 
    0x26, 0x23, 0x26, 0x3C, 0x00, 0x1E, 0xA1, 0xE1, 0x21, 0x12, 0x00, 0x3D, 0x40, 0x20, 0x7D, 0x00, 
    0x38, 0x54, 0x54, 0x55, 0x09, 0x00, 0x20, 0x55, 0x55, 0x55, 0x78, 0x00, 0x20, 0x55, 0x54, 0x55, 
    0x78, 0x00, 0x20, 0x55, 0x55, 0x54, 0x78, 0x00, 0x20, 0x57, 0x55, 0x57, 0x78, 0x00, 0x1C, 0xA2, 
    0xE2, 0x22, 0x14, 0x00, 0x38, 0x55, 0x55, 0x55, 0x08, 0x00, 0x38, 0x55, 0x54, 0x55, 0x08, 0x00, 
    0x38, 0x55, 0x55, 0x54, 0x08, 0x00, 0x00, 0x01, 0x7C, 0x41, 0x00, 0x00, 0x01, 0x7D, 0x41, 0x00, 
    0x00, 0x01, 0x7C, 0x40, 0x00, 0x70, 0x29, 0x24, 0x29, 0x70, 0x00, 0x78, 0x2F, 0x25, 0x2F, 0x78, 
    0x00, 0x7C, 0x54, 0x54, 0x55, 0x45, 0x00, 0x34, 0x54, 0x7C, 0x54, 0x58, 0x00, 0x7E, 0x09, 0x7F, 
    0x49, 0x49, 0x00, 0x38, 0x45, 0x45, 0x39, 0x00, 0x38, 0x45, 0x44, 0x39, 0x00, 0x39, 0x45, 0x44, 
    0x38, 0x00, 0x3C, 0x41, 0x21, 0x7D, 0x00, 0x3D, 0x41, 0x20, 0x7C, 0x00, 0x9C, 0xA1, 0x60, 0x3D, 
    0x00, 0x3D, 0x42, 0x42, 0x3D, 0x00, 0x3C, 0x41, 0x40, 0x3D, 0x80, 0x70, 0x68, 0x58, 0x38, 0x04, 
    0x00, 0x48, 0x3E, 0x49, 0x49, 0x62, 0x00, 0x7E, 0x61, 0x5D, 0x43, 0x3F, 0x00, 0x22, 0x14, 0x08, 
    0x14, 0x22, 0x00, 0x40, 0x88, 0x7E, 0x09, 0x02, 0x00, 0x20, 0x54, 0x55, 0x55, 0x78, 0x00, 0x00, 
    0x00, 0x7D, 0x41, 0x00, 0x38, 0x44, 0x45, 0x39, 0x00, 0x3C, 0x40, 0x21, 0x7D, 0x00, 0x7A, 0x09, 
    0x0A, 0x71, 0x00, 0x7A, 0x11, 0x22, 0x79, 0x00, 0x08, 0x55, 0x55, 0x55, 0x5E, 0x00, 0x4E, 0x51, 
    0x51, 0x4E, 0x00, 0x30, 0x48, 0x4D, 0x40, 0x20, 0x3E, 0x41, 0x5D, 0x4B, 0x55, 0x3E, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x1C, 0x00, 0x17, 0x08, 0x4C, 0x6A, 0x50, 0x00, 0x17, 0x08, 0x34, 0x2A, 0x78, 
    0x00, 0x00, 0x30, 0x7D, 0x30, 0x00, 0x08, 0x14, 0x00, 0x08, 0x14, 0x00, 0x14, 0x08, 0x00, 0x14, 
    0x08, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xBB, 0xEE, 0xBB, 
    0xEE, 0xBB, 0xEE, 0x00, 0x00, 0x00, 0xFF, 0x08, 0x08, 0x08, 0xFF, 0x00, 0x70, 0x28, 0x25, 0x29, 
    0x70, 0x00, 0x70, 0x29, 0x25, 0x29, 0x70, 0x00, 0x70, 0x29, 0x25, 0x28, 0x70, 0x3E, 0x41, 0x5D, 
    0x55, 0x41, 0x3E, 0x0A, 0xFB, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x0A, 0xFA, 0x02, 0xFE, 0x0A, 
    0x0B, 0x08, 0x0F, 0x00, 0x18, 0x24, 0x66, 0x24, 0x00, 0x29, 0x2A, 0x7C, 0x2A, 0x29, 0x08, 0x08, 
    0x08, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0xFF, 0x08, 0x08, 0x00, 0x20, 0x56, 0x55, 0x56, 0x79, 0x00, 0x70, 0x2A, 0x25, 
    0x2A, 0x71, 0x00, 0x0F, 0x08, 0x0B, 0x0A, 0x0A, 0x00, 0xFE, 0x02, 0xFA, 0x0A, 0x0A, 0x0A, 0x0B, 
    0x08, 0x0B, 0x0A, 0x0A, 0x0A, 0xFA, 0x02, 0xFA, 0x0A, 0x0A, 0x00, 0xFF, 0x00, 0xFB, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xFB, 0x00, 0xFB, 0x0A, 0x0A, 0x00, 0x5D, 0x22, 0x22, 
    0x22, 0x5D, 0x00, 0x22, 0x55, 0x59, 0x30, 0x00, 0x08, 0x7F, 0x49, 0x41, 0x3E, 0x00, 0x7C, 0x55, 
    0x55, 0x55, 0x44, 0x00, 0x7C, 0x55, 0x54, 0x55, 0x44, 0x00, 0x7C, 0x55, 0x55, 0x54, 0x44, 0x00, 
    0x00, 0x00, 0x07, 0x00, 0x00, 0x44, 0x7D, 0x45, 0x00, 0x00, 0x45, 0x7D, 0x45, 0x00, 0x00, 0x45, 
    0x7C, 0x45, 0x08, 0x08, 0x08, 0x0F, 0x00, 0x00, 0x00, 0xF8, 0x08, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x45, 0x7D, 
    0x44, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0x3C, 0x42, 0x43, 0x3D, 0x00, 0xFE, 0x4A, 0x4A, 
    0x34, 0x00, 0x3C, 0x43, 0x43, 0x3D, 0x00, 0x3D, 0x43, 0x42, 0x3C, 0x00, 0x32, 0x49, 0x4A, 0x31, 
    0x00, 0x3A, 0x45, 0x46, 0x39, 0x00, 0xFC, 0x20, 0x20, 0x1C, 0x00, 0xFE, 0xAA, 0x28, 0x10, 0x00, 
    0xFF, 0xA5, 0x24, 0x18, 0x00, 0x3C, 0x40, 0x41, 0x3D, 0x00, 0x3C, 0x41, 0x41, 0x3D, 0x00, 0x3D, 
    0x41, 0x40, 0x3C, 0x00, 0x9C, 0xA0, 0x61, 0x3D, 0x00, 0x04, 0x08, 0x71, 0x09, 0x04, 0x00, 0x00, 
    0x02, 0x02, 0x02, 0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x24, 0x2E, 
    0x24, 0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x05, 0x17, 0x0A, 0x34, 0x2A, 0x78, 0x00, 0x06, 0x09, 
    0x7F, 0x01, 0x7F, 0x00, 0x22, 0x4D, 0x55, 0x59, 0x22, 0x00, 0x08, 0x08, 0x2A, 0x08, 0x08, 0x00, 
    0x00, 0x08, 0x18, 0x18, 0x00, 0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 
    0x08, 0x00, 0x02, 0x0F, 0x00, 0x09, 0x0F, 0x05, 0x00, 0x09, 0x0D, 0x0A, 0x00, 0x3C, 0x3C, 0x3C, 
    0x3C
};

#endif

