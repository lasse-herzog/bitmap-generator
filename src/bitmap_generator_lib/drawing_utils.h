#include "utils.h"

#ifndef RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H
#define RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H

/**
 * Sets a Pixel at the specified coordinates to a certain color.
 * @param x X coordinate of the Pixel inside the Bitmap
 * @param y Y coordinate of the Pixel inside the Bitmap
 * @param bitmap The Bitmap struct in which the Pixel should be set.
 * @param rgb An RGB struct representing the color the pixel should be set to.
 * @return 0 if Pixel was successfully set, else 1
 */
extern int setPixel(int x, int y, Bitmap *bitmap, RGB rgb);

#endif //RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H
