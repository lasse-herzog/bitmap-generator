#ifndef RASTERGRAFIK_GENERATOR__UTILS_H_
#define RASTERGRAFIK_GENERATOR__UTILS_H_

#define BLUE (RGB) {0,0,255}
#define GREEN (RGB) {0,255,0}
#define RED (RGB) {255,0,0}
#define WHITE (RGB) {255,255,255}

/**
 * A struct representing a RGB value. Contains a Byte for each of the 3 additive
 * primary colors Red, Green and Blue holding their respective color values.
 */
typedef struct RGB {
  unsigned char R;
  unsigned char G;
  unsigned char B;
} RGB;

/**
 * A struct representing a Bitmap Image. Contains Information about the dimensions
 * of the Bitmap and a Pointer to the RGB values of the Pixels.
 */
typedef struct Bitmap {
  int width;
  int height;
  RGB *pixels;
} Bitmap;

#endif //RASTERGRAFIK_GENERATOR__UTILS_H_
