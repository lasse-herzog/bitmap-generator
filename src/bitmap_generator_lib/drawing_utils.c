#include <stdlib.h>
#include "drawing_utils.h"
#include "utils.h"

int drawCircle(int xm, int ym, int r, struct Bitmap *bitmap, RGB rgb) {
  int x = -r;
  int y = 0;
  int error = 2 - 2 * r;

  do {
    setPixel(xm - x, ym + y, bitmap, rgb);
    setPixel(xm - y, ym - x, bitmap, rgb);
    setPixel(xm + x, ym - y, bitmap, rgb);
    setPixel(xm + y, ym + x, bitmap, rgb);

    r = error;

    if (r > x) error += ++x * 2 + 1;
    if (r <= y) error += ++y * 2 + 1;
  } while (x < 0);
}

int drawLine(int x0, int y0, int x1, int y1, Bitmap *bitmap, RGB rgb) {
  int dx = abs(x1 - x0);
  int sx = x0 < x1 ? 1 : -1;
  int dy = -abs(y1 - y0);
  int sy = y0 < y1 ? 1 : -1;
  int error = dx + dy;

  while (1) {
    setPixel(x0, y0, bitmap, rgb);

    if (x0 == x1 && y0 == y1) break;

    int error2 = error * 2;

    if (error2 >= dy) {
      if (x0 == x1) break;
      error += dy;
      x0 += sx;
    }

    if (error2 <= dx) {
      if (y0 == y1) break;
      error += dx;
      y0 += sy;
    }
  }

  return 0;
}

int setPixel(int x, int y, Bitmap *bitmap, RGB rgb) {
  if (y < 0 || bitmap->height <= y || x < 0 || bitmap->width <= x) {
    return 1;
  }

  bitmap->pixels[y * bitmap->width + x] = rgb;

  return 0;
}


