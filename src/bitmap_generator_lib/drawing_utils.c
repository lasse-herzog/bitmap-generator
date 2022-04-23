#include "drawing_utils.h"
#include "utils.h"

int setPixel(int x, int y, Bitmap *bitmap, RGB rgb) {
  if (y < 0 || bitmap->height <= y || x < 0 || bitmap->width <= x) {
    return 1;
  }

  bitmap->pixels[y * bitmap->width + x] = rgb;

  return 0;
}
