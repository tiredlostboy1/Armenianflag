#include <iostream>

#include "BitmapPlusPlus.hpp"

int main(void) {
  bmp::Pixel colors[3] = {{short{155}, short{0}, short{0}},
                          {short{0}, short{0}, short{155}},
                          {short{255}, short{165}, short{0}}};

  bmp::Bitmap image(768, 512);
  auto third = image.Height() / 3 + 1;  // plus one for last pixel
  for (std::int32_t y = 0; y < image.Height(); ++y) {
    auto& color = colors[y / third];
    for (std::int32_t x = 0; x < image.Width(); ++x) {
      image.Set(x, y, color);
    }
  }
  image.Save("image.bmp");

  return EXIT_SUCCESS;
}