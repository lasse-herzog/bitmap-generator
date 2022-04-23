#include "gtest/gtest.h"

extern "C" {
#include "../src/bitmap_generator_lib/utils.h"
#include "../src/bitmap_generator_lib/drawing_utils.h"
}

class DrawingUtilsTest : public testing::Test {
 protected:
  Bitmap bmp = {
      .width = 2,
      .height = 2,
      .pixels = new RGB[4],
  };

  RGB white_pixel = {
      .R = 255,
      .G = 255,
      .B = 255
  };

  void SetUp() override {
    bmp = {
        .width = 2,
        .height = 2,
        .pixels = new RGB[4],
    };
  }
};

TEST_F(DrawingUtilsTest, SetPixel) {
  setPixel(0, 0, &bmp, white_pixel);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);
}

TEST_F(DrawingUtilsTest, SetMultiplePixels) {
  setPixel(0, 0, &bmp, white_pixel);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  setPixel(1, 0, &bmp, white_pixel);

  EXPECT_EQ(bmp.pixels[1].R, 255);
  EXPECT_EQ(bmp.pixels[1].G, 255);
  EXPECT_EQ(bmp.pixels[1].B, 255);

  setPixel(0, 1, &bmp, white_pixel);

  EXPECT_EQ(bmp.pixels[2].R, 255);
  EXPECT_EQ(bmp.pixels[2].G, 255);
  EXPECT_EQ(bmp.pixels[2].B, 255);

  setPixel(1, 1, &bmp, white_pixel);

  EXPECT_EQ(bmp.pixels[3].R, 255);
  EXPECT_EQ(bmp.pixels[3].G, 255);
  EXPECT_EQ(bmp.pixels[3].B, 255);
}

TEST_F(DrawingUtilsTest, SetPixelOutOfLowerBounds) {
  int result = setPixel(-1, -1, &bmp, white_pixel);

  EXPECT_EQ(result, 1);
}

TEST_F(DrawingUtilsTest, SetPixelOutOfUpperBounds) {
  int result = setPixel(2, 2, &bmp, white_pixel);

  EXPECT_EQ(result, 1);
}
