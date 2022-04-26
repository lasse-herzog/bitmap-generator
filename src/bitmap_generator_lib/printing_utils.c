#include <bits/types/FILE.h>
#include <stdio.h>
#include "printing_utils.h"
#include "utils.h"

int printToPpm(char *filename, Bitmap *bmp) {
  FILE *p_file = fopen(filename, "w");

  if (NULL != p_file) {
    fprintf(p_file, "P3\n%d %d\n255\n", bmp->width, bmp->height);

    for (int i = 0; i < bmp->width * bmp->height; ++i) {
      RGB pixel = bmp->pixels[i];
      fprintf(p_file, "%d %d %d ", pixel.R, pixel.G, pixel.B);
    }

    fclose(p_file);
  }
}