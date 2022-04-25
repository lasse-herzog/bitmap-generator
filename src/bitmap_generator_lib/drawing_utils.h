#include "utils.h"

#ifndef RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H
#define RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H

/**
 * Draws a line in a specified color in a bitmap struct using the Bresenham algorithm
 * and the setPixel() function.
 * @param x0 X-coordinate of start point
 * @param y0 Y-coordinate of start point
 * @param x1 X-coordinate of end point
 * @param y1 Y-coordinate of end point
 * @param bitmap Bitmap struct in which the line will be drawn.
 * @param rgb Color in which the line will be drawn.
 * @return 0 if line was successfully drawn
 *         1 if start or end point is out of bounds of bitmap
 */
extern int drawLine(int x0, int y0, int x1, int y1, Bitmap *bitmap, RGB rgb);

/**
 * Sets a Pixel at the specified coordinates to a certain color.
 * @param x X coordinate of the Pixel inside the Bitmap
 * @param y Y coordinate of the Pixel inside the Bitmap
 * @param bitmap The Bitmap struct in which the Pixel should be set.
 * @param rgb An RGB struct representing the color the pixel should be set to.
 * @return 0 if pixel was successfully set
 *         1 if pixel is out of bounds
 */
extern int setPixel(int x, int y, Bitmap *bitmap, RGB rgb);

#endif //RASTERGRAFIK_GENERATOR_DRAWING_UTILS_H
