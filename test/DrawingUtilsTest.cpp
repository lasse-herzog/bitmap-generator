#include "gtest/gtest.h"

extern "C" {
#include "../src/bitmap_generator_lib/utils.h"
#include "../src/bitmap_generator_lib/drawing_utils.h"
}

class DrawingUtilsTest : public testing::Test {
 protected:
  Bitmap bmp = {
      .width = 3,
      .height = 3,
      .pixels = new RGB[9],
  };

  RGB black = {
      .R = 0,
      .G = 0,
      .B = 0
  };

  RGB white = {
      .R = 255,
      .G = 255,
      .B = 255
  };

  void SetUp() override {
    bmp = {
        .width = 3,
        .height = 3,
        .pixels = new RGB[9],
    };

    for (int x = 0; x < bmp.width; ++x) {
      for (int y = 0; y < bmp.height; ++y) {
        setPixel(x, y, &bmp, black);
      }
    }
  }
};

TEST_F(DrawingUtilsTest, DrawLineLowDown) {
  drawLine(0, 0, 2, 1, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  EXPECT_EQ(bmp.pixels[1].R, 0);
  EXPECT_EQ(bmp.pixels[1].G, 0);
  EXPECT_EQ(bmp.pixels[1].B, 0);

  EXPECT_EQ(bmp.pixels[2].R, 0);
  EXPECT_EQ(bmp.pixels[2].G, 0);
  EXPECT_EQ(bmp.pixels[2].B, 0);

  EXPECT_EQ(bmp.pixels[3].R, 0);
  EXPECT_EQ(bmp.pixels[3].G, 0);
  EXPECT_EQ(bmp.pixels[3].B, 0);

  EXPECT_EQ(bmp.pixels[4].R, 255);
  EXPECT_EQ(bmp.pixels[4].G, 255);
  EXPECT_EQ(bmp.pixels[4].B, 255);

  EXPECT_EQ(bmp.pixels[5].R, 255);
  EXPECT_EQ(bmp.pixels[5].G, 255);
  EXPECT_EQ(bmp.pixels[5].B, 255);

  EXPECT_EQ(bmp.pixels[6].R, 0);
  EXPECT_EQ(bmp.pixels[6].G, 0);
  EXPECT_EQ(bmp.pixels[6].B, 0);

  EXPECT_EQ(bmp.pixels[7].R, 0);
  EXPECT_EQ(bmp.pixels[7].G, 0);
  EXPECT_EQ(bmp.pixels[7].B, 0);

  EXPECT_EQ(bmp.pixels[8].R, 0);
  EXPECT_EQ(bmp.pixels[8].G, 0);
  EXPECT_EQ(bmp.pixels[8].B, 0);
}

TEST_F(DrawingUtilsTest, DrawLineLowUp) {
  drawLine(2, 1, 0, 0, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  EXPECT_EQ(bmp.pixels[1].R, 255);
  EXPECT_EQ(bmp.pixels[1].G, 255);
  EXPECT_EQ(bmp.pixels[1].B, 255);

  EXPECT_EQ(bmp.pixels[2].R, 0);
  EXPECT_EQ(bmp.pixels[2].G, 0);
  EXPECT_EQ(bmp.pixels[2].B, 0);

  EXPECT_EQ(bmp.pixels[3].R, 0);
  EXPECT_EQ(bmp.pixels[3].G, 0);
  EXPECT_EQ(bmp.pixels[3].B, 0);

  EXPECT_EQ(bmp.pixels[4].R, 0);
  EXPECT_EQ(bmp.pixels[4].G, 0);
  EXPECT_EQ(bmp.pixels[4].B, 0);

  EXPECT_EQ(bmp.pixels[5].R, 255);
  EXPECT_EQ(bmp.pixels[5].G, 255);
  EXPECT_EQ(bmp.pixels[5].B, 255);

  EXPECT_EQ(bmp.pixels[6].R, 0);
  EXPECT_EQ(bmp.pixels[6].G, 0);
  EXPECT_EQ(bmp.pixels[6].B, 0);

  EXPECT_EQ(bmp.pixels[7].R, 0);
  EXPECT_EQ(bmp.pixels[7].G, 0);
  EXPECT_EQ(bmp.pixels[7].B, 0);

  EXPECT_EQ(bmp.pixels[8].R, 0);
  EXPECT_EQ(bmp.pixels[8].G, 0);
  EXPECT_EQ(bmp.pixels[8].B, 0);
}

TEST_F(DrawingUtilsTest, DrawLineHighDown) {
  drawLine(0, 0, 1, 2, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  EXPECT_EQ(bmp.pixels[1].R, 0);
  EXPECT_EQ(bmp.pixels[1].G, 0);
  EXPECT_EQ(bmp.pixels[1].B, 0);

  EXPECT_EQ(bmp.pixels[2].R, 0);
  EXPECT_EQ(bmp.pixels[2].G, 0);
  EXPECT_EQ(bmp.pixels[2].B, 0);

  EXPECT_EQ(bmp.pixels[3].R, 0);
  EXPECT_EQ(bmp.pixels[3].G, 0);
  EXPECT_EQ(bmp.pixels[3].B, 0);

  EXPECT_EQ(bmp.pixels[4].R, 255);
  EXPECT_EQ(bmp.pixels[4].G, 255);
  EXPECT_EQ(bmp.pixels[4].B, 255);

  EXPECT_EQ(bmp.pixels[5].R, 0);
  EXPECT_EQ(bmp.pixels[5].G, 0);
  EXPECT_EQ(bmp.pixels[5].B, 0);

  EXPECT_EQ(bmp.pixels[6].R, 0);
  EXPECT_EQ(bmp.pixels[6].G, 0);
  EXPECT_EQ(bmp.pixels[6].B, 0);

  EXPECT_EQ(bmp.pixels[7].R, 255);
  EXPECT_EQ(bmp.pixels[7].G, 255);
  EXPECT_EQ(bmp.pixels[7].B, 255);

  EXPECT_EQ(bmp.pixels[8].R, 0);
  EXPECT_EQ(bmp.pixels[8].G, 0);
  EXPECT_EQ(bmp.pixels[8].B, 0);
}

TEST_F(DrawingUtilsTest, DrawLineHighUp) {
  drawLine(1, 2, 0, 0, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  EXPECT_EQ(bmp.pixels[1].R, 0);
  EXPECT_EQ(bmp.pixels[1].G, 0);
  EXPECT_EQ(bmp.pixels[1].B, 0);

  EXPECT_EQ(bmp.pixels[2].R, 0);
  EXPECT_EQ(bmp.pixels[2].G, 0);
  EXPECT_EQ(bmp.pixels[2].B, 0);

  EXPECT_EQ(bmp.pixels[3].R, 255);
  EXPECT_EQ(bmp.pixels[3].G, 255);
  EXPECT_EQ(bmp.pixels[3].B, 255);

  EXPECT_EQ(bmp.pixels[4].R, 0);
  EXPECT_EQ(bmp.pixels[4].G, 0);
  EXPECT_EQ(bmp.pixels[4].B, 0);

  EXPECT_EQ(bmp.pixels[5].R, 0);
  EXPECT_EQ(bmp.pixels[5].G, 0);
  EXPECT_EQ(bmp.pixels[5].B, 0);

  EXPECT_EQ(bmp.pixels[6].R, 0);
  EXPECT_EQ(bmp.pixels[6].G, 0);
  EXPECT_EQ(bmp.pixels[6].B, 0);

  EXPECT_EQ(bmp.pixels[7].R, 255);
  EXPECT_EQ(bmp.pixels[7].G, 255);
  EXPECT_EQ(bmp.pixels[7].B, 255);

  EXPECT_EQ(bmp.pixels[8].R, 0);
  EXPECT_EQ(bmp.pixels[8].G, 0);
  EXPECT_EQ(bmp.pixels[8].B, 0);
}

TEST_F(DrawingUtilsTest, DrawLineDiagonal) {
  drawLine(0, 0, 2, 2, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);

  EXPECT_EQ(bmp.pixels[1].R, 0);
  EXPECT_EQ(bmp.pixels[1].G, 0);
  EXPECT_EQ(bmp.pixels[1].B, 0);

  EXPECT_EQ(bmp.pixels[2].R, 0);
  EXPECT_EQ(bmp.pixels[2].G, 0);
  EXPECT_EQ(bmp.pixels[2].B, 0);

  EXPECT_EQ(bmp.pixels[3].R, 0);
  EXPECT_EQ(bmp.pixels[3].G, 0);
  EXPECT_EQ(bmp.pixels[3].B, 0);

  EXPECT_EQ(bmp.pixels[4].R, 255);
  EXPECT_EQ(bmp.pixels[4].G, 255);
  EXPECT_EQ(bmp.pixels[4].B, 255);

  EXPECT_EQ(bmp.pixels[5].R, 0);
  EXPECT_EQ(bmp.pixels[5].G, 0);
  EXPECT_EQ(bmp.pixels[5].B, 0);

  EXPECT_EQ(bmp.pixels[6].R, 0);
  EXPECT_EQ(bmp.pixels[6].G, 0);
  EXPECT_EQ(bmp.pixels[6].B, 0);

  EXPECT_EQ(bmp.pixels[7].R, 0);
  EXPECT_EQ(bmp.pixels[7].G, 0);
  EXPECT_EQ(bmp.pixels[7].B, 0);

  EXPECT_EQ(bmp.pixels[8].R, 255);
  EXPECT_EQ(bmp.pixels[8].G, 255);
  EXPECT_EQ(bmp.pixels[8].B, 255);
}

TEST_F(DrawingUtilsTest, DrawLineOutOfBounds) {
  int result = drawLine(-1, -1, 0, 0, &bmp, white);

  EXPECT_EQ(result, 1);

  result = drawLine(0, 0, 3, 3, &bmp, white);

  EXPECT_EQ(result, 1);
}

TEST_F(DrawingUtilsTest, SetPixel) {
  EXPECT_EQ(bmp.pixels[0].R, 0);
  EXPECT_EQ(bmp.pixels[0].G, 0);
  EXPECT_EQ(bmp.pixels[0].B, 0);

  setPixel(0, 0, &bmp, white);

  EXPECT_EQ(bmp.pixels[0].R, 255);
  EXPECT_EQ(bmp.pixels[0].G, 255);
  EXPECT_EQ(bmp.pixels[0].B, 255);
}

TEST_F(DrawingUtilsTest, SetAllPixels) {
  for (int y = 0; y < bmp.width; ++y) {
    for (int x = 0; x < bmp.height; ++x) {
      int i = y * bmp.width + x;

      EXPECT_EQ(bmp.pixels[i].R, 0);
      EXPECT_EQ(bmp.pixels[i].G, 0);
      EXPECT_EQ(bmp.pixels[i].B, 0);

      setPixel(x, y, &bmp, white);

      EXPECT_EQ(bmp.pixels[i].R, 255);
      EXPECT_EQ(bmp.pixels[i].G, 255);
      EXPECT_EQ(bmp.pixels[i].B, 255);
    }
  }
}

TEST_F(DrawingUtilsTest, SetPixelOutOfBounds) {
  int result = setPixel(-1, -1, &bmp, white);

  EXPECT_EQ(result, 1);

  result = setPixel(3, 3, &bmp, white);

  EXPECT_EQ(result, 1);
}
