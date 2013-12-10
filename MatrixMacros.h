// This file is part of Red Pill
// A 3D OpenGL "Matrix" screensaver for Mac OS X
// Copyright (C) 2002, 2003 mathew <meta@pobox.com>
//
// Red Pill is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
// or visit <URL:http://www.fsf.org/>

// Some useful macros and constants used in various places in the code

// Random float from 0.0 to 1.0
#define RANDOM_FLOAT_01 ((float)(random() % 100) / 100.0)
// Random float from -1.0 to 1.0
#define RANDOM_FLOAT_11 ((float)(random() % 200) / 100.0 - 1.0)
/// Assorted constants

// Near and far clipping planes, cm from the user's eye
#define CLIP_NEAR 40.0
#define CLIP_FAR 250.0

// Field of view in degrees
#define FIELD_OF_VIEW 45.0
// Tangent of half that value, used for calculating coordinate ranges
#define TAN_FOV 0.4142

// Integer number of glyphs in the texture pixmap
// The pixmap is an 8x8 grid, glyph 0 = top left, and should be empty space
// Each square of the grid is 32x32 and contains one glyph
// Not all squares need to be filled
#define NUM_GLYPHS 8
#define GLYPH_WIDTH 64
#define GLYPH_IMAGE_WIDTH 256
#define GLYPH_HEIGHT 56
#define GLYPH_IMAGE_HEIGHT 224

// Given bottom,left coordinates of a 32x32 square within a 256x256 texture,
// this is the amount to add to both coordinates to get the top,right pixel
// of the same texture. It's equal to 31.0 / 256.0.
#define GLYPH_TEX_WIDTH (GLYPH_WIDTH - 1.0) / GLYPH_IMAGE_WIDTH
#define GLYPH_TEX_HEIGHT (GLYPH_HEIGHT - 1.0) / GLYPH_IMAGE_HEIGHT


#define GLYPH_COLOR 0x00FF00
#define GLYPH_RED ((GLYPH_COLOR >> 16) & 0xFF) / 0xFF
#define GLYPH_GREEN ((GLYPH_COLOR >> 8) & 0xFF) / 0xFF
#define GLYPH_BLUE ((GLYPH_COLOR >> 0) & 0xFF) / 0xFF

// Cell size in cm
// Bear in mind that it needs to be visible when CLIP_FAR away, each cell holds one glyph
#define CELL_SIZE 1.0

// Cell spacing in strips is multiplied by this, to pull them apart a bit
#define QUAD_SQUISH_FACTOR 1.02
