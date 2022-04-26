#include "utils.h"

#ifndef RASTERGRAFIK_GENERATOR__PRINTING_UTILS_H_
#define RASTERGRAFIK_GENERATOR__PRINTING_UTILS_H_

/**
 * Exports a give Bitmap Struct to a .ppm file.
 * @param filename Name of the .ppm file. Must end with ".ppm".
 * @param bmp The Bitmap struct that will be exported.
 * @return 0
 */
extern int printToPpm(char *filename, Bitmap *bmp);

#endif //RASTERGRAFIK_GENERATOR__PRINTING_UTILS_H_
