#pragma once

namespace Colors
{
	static class Color
	{
	public:
		/* CTOR */
		Color();
		Color(int, int, int);
		~Color();

		/* VARIABLES */
		int red;
		int green;
		int blue;
		int alpha;
	};
}

class Color
{
public:
	Color();
	~Color();
};

