#pragma once

namespace Colors
{
	 class Color
	{
	public:
		/* CTOR */
		Color();
		Color(int, int, int);
		~Color(); //Destructor

	private:
		/* VARIABLES */
		int rojo;
		int verde;
		int azul;
		int Opacity;
	};
}