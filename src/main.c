#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printing_utils.h"
#include "figures.h"
#include "utils.h"

int main(int argc, char **argv) {
  int c;

  char *color_string = "white", *height_string = "2048", *width_string = "2048", *filename = "my_beautiful_bitmap_image.ppm",
      *number_of_points_string = "42";

  static struct option long_options[] = {
      {"color_string", optional_argument, 0, 'c'},
      {"file", required_argument, 0, 'f'},
      {"height", required_argument, 0, 'h'},
      {"number_of_points", required_argument, 0, 'n'},
      {"width", required_argument, 0, 'w'},
      {0, 0, 0, 0}
  };

  int option_index = 0;

  while ((c = getopt_long(argc, argv, "c:h:n:w:f:",
                          long_options, &option_index)) != -1) {
    switch (c) {
      case 'c':color_string = optarg;
        break;
      case 'f':filename = optarg;
        break;
      case 'h':height_string = optarg;
        break;
      case 'n':number_of_points_string = optarg;
        break;
      case 'w':width_string = optarg;
        break;
      case '?':break;
      default:printf("?? getopt returned character code 0%o ??\n", c);
    }
  }

  char *ptr;
  int height = (int) strtol(height_string, &ptr, 10);
  int width = (int) strtol(width_string, &ptr, 10);
  int number_of_points = (int) strtol(number_of_points_string, &ptr, 10);

  RGB color;
  Bitmap bmp = {
      .height = height,
      .width = width,
      .pixels = malloc(height * width * sizeof(RGB))
  };

  if (0 == strcmp(color_string, "blue")) {
    color = BLUE;
  } else if (0 == strcmp(color_string, "green")) {
    color = GREEN;
  } else if (0 == strcmp(color_string, "red")) {
    color = RED;
  } else {
    color = WHITE;
  }

  if (0 == drawFigure01(&bmp, number_of_points + 1, color)) {
    printToPpm(filename, &bmp);
  } else {
    puts("Try again with a 1:1 aspect ratio resolution");
  }

  exit(0);
}

