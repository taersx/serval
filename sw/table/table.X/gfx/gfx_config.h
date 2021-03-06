/* 
 * File:   gfx_config.h
 * Author: Tae
 *
 * Created on April 9, 2015, 3:56 PM
 */

#ifndef GFX_CONFIG_H
#define	GFX_CONFIG_H

// Note: Configuration to disable the features are commented out
// to show the specific macros that disables them.
#define GFX_CONFIG_NONBLOCKING_DISABLE
#define GFX_CONFIG_ALPHABLEND_DISABLE
#define GFX_CONFIG_GRADIENT_DISABLE
#define GFX_CONFIG_FOCUS_DISABLE
#define GFX_CONFIG_PALETTE_DISABLE
#define GFX_CONFIG_PALETTE_EXTERNAL_DISABLE
#define GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
#define GFX_CONFIG_FONT_CHAR_SIZE 8
#define GFX_CONFIG_COLOR_DEPTH 16
//#define GFX_CONFIG_FONT_FLASH_DISABLE
#define GFX_CONFIG_FONT_EXTERNAL_DISABLE
#define GFX_CONFIG_FONT_RAM_DISABLE
#define GFX_CONFIG_FONT_ANTIALIASED_DISABLE
//#define GFX_CONFIG_IMAGE_FLASH_DISABLE
#define GFX_CONFIG_IMAGE_EXTERNAL_DISABLE
#define GFX_CONFIG_IMAGE_RAM_DISABLE
#define GFX_CONFIG_RLE_DECODE_DISABLE
#define GFX_CONFIG_IPU_DECODE_DISABLE
#define GFX_CONFIG_TRANSPARENT_COLOR_DISABLE
//#define GFX_EXTERNAL_FONT_RASTER_BUFFER_SIZE 51
#define GFX_CONFIG_USE_TOUCHSCREEN_DISABLE
#define GFX_CONFIG_USE_KEYBOARD_DISABLE
//#define GFX_malloc(size) malloc(size)
//#define GFX_free(pObj) free(pObj)

#endif	/* GFX_CONFIG_H */

