#include "circle.h"
void drawCirc(const int& i0, const int& j0, const int& r, const int& t, const float& red, const float& green, const float& blue);
circle::circle(int _x0, int _y0, int _r, int _t)
{
	x0 = _x0;
	y0 = _y0;
	r = _r;
	t = _t;
}
void circle::draw()
{
	drawCirc(x0, y0, r, t, 0, 0, 0);
}