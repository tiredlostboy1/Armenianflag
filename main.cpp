#include "BitmapPlusPlus.hpp"
#include <iostream>

int main(void)
{
		bmp::Bitmap image(512, 512);
		for (std::int32_t y = 0; y < image.Height()/3; ++y)
		{
			for (std::int32_t x = 0; x < image.Width(); ++x)
			{
				bmp::Pixel color =
				{
					static_cast<std::uint8_t>(155),
					static_cast<std::uint8_t>(0),
					static_cast<std::uint8_t>(0),
				};
				image.Set(x, y, color);
			}
		}
	for (std::int32_t y = image.Height()/3; y < 2*image.Height()/3; ++y)
		{
			for (std::int32_t x = 0; x < image.Width(); ++x)
			{
				bmp::Pixel color =
				{
					static_cast<std::uint8_t>(0),
					static_cast<std::uint8_t>(0),
					static_cast<std::uint8_t>(155),
				};
				image.Set(x, y, color);
			}
		}
for (std::int32_t y = 2*image.Height()/3; y < image.Height(); ++y)
		{
			for (std::int32_t x = 0; x < image.Width(); ++x)
			{
				bmp::Pixel color =
				{
					static_cast<std::uint8_t>(255),
					static_cast<std::uint8_t>(165),
					static_cast<std::uint8_t>(0),
				};
				image.Set(x, y, color);
			}
		}
		image.Save("image.bmp");
	

	return EXIT_SUCCESS;
}