#include "Color.h"

namespace Colors
{
	Color::Color()
	{
		rojo = 0;
		verde = 0;
		azul = 0;
		Opacity = 255;
	}

	Color::Color(int r, int g, int b)
	{
		rojo = r;
		verde = g;
		azul = b;
		Opacity = 255;
	}

	Color::~Color()
	{}
}