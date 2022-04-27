#include "utils.h"

#ifndef BITMAP_GENERATOR_SRC_BITMAP_GENERATOR_LIB_FIGURES_H_
#define BITMAP_GENERATOR_SRC_BITMAP_GENERATOR_LIB_FIGURES_H_

/**
 * Draws the picture shown in figure_01 to the Bitmap.
 * ! Does not clear the Bitmap before drawing.
 * @param bmp The Bitmap struct in which the figure will be drawn.
 * @param n The number of points on the circle.
 * @param rgb Color in which the figure will be drawn.
 * @return 1 if aspect ratio is not square
 *         0 after figure was drawn
 */
extern int drawFigure01(Bitmap *bmp, int n, RGB rgb);

#endif //BITMAP_GENERATOR_SRC_BITMAP_GENERATOR_LIB_FIGURES_H_
