#include <math.h>
#include "drawing_utils.h"
#include "figures.h"

int drawFigure01(Bitmap *bmp, int n, RGB rgb) {
  if (bmp->height != bmp->width) return 1;

  int a = bmp->height;
  int r = a -1;

  double alpha = M_PI / (2 * n);
  int x, y;

  drawCircle(0, r, r, bmp, rgb);

  for (int i = 0; i < n; ++i) {
    x = (int) (sin(alpha * i) * a);
    y = (int) ((1 - cos(alpha * i)) * a);

    drawLine(0, r, x, y, bmp, rgb);
    drawLine(x, y, r, 0, bmp, rgb);
  }

  drawLine(0, r, r, r, bmp, rgb);
  drawLine(r, 0, r, r, bmp, rgb);

  return 0;
}