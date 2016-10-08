#include "icon.h"
void drawIcon(const int& i0, const int& j0, const int& r, const int& t, const float& r1, const float& g1, const float& b1, const float& r2, const float& g2, const float& b2, double xpos, double ypos);
icon::icon(int _x0, int _y0, int _r, int _t, double _xpos, double _ypos)
{
	x0 = _x0;
	y0 = _y0;
	r = _r;
	t = _t;
	xpos = _xpos;
	ypos = _ypos;
}
void icon::draw()
{
	drawIcon(x0, y0, r, t, 1, 0, 0, 0, 0, 1, xpos, ypos);
}