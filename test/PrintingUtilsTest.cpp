#include <gtest/gtest.h>
#include <fstream>

extern "C" {
#include "drawing_utils.h"
#include "printing_utils.h"
#include "utils.h"
}

class PrintingUtilsTest : public testing::Test {
 protected:
  Bitmap bmp = {
      .width = 3,
      .height = 3,
      .pixels = new RGB[9],
  };
};

TEST_F(PrintingUtilsTest, PrintToPpm) {
  printToPpm((char *) "test.ppm", &bmp);

  std::ifstream ppm_file;
  ppm_file.open("test.ppm");

  ASSERT_TRUE(ppm_file.is_open());

  std::array<std::string, 4> lines;
  int i = 0;

  while(ppm_file) {
    std::getline(ppm_file, lines[i]);
    ++i;
  }

  EXPECT_EQ(lines[0], "P3");
  EXPECT_EQ(lines[1], "3 3");
  EXPECT_EQ(lines[2], "255");
  EXPECT_EQ(lines[3], "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 ");
}