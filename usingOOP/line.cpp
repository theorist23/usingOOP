#include "line.h"
void drawLine(int i0, int j0, int i1, int j1, const int t, const float& red, const float& green, const float& blue);
line::line(int _x0, int _y0, int _x1, int _y1, int _t)
{
	x0 = _x0;
	y0 = _y0;
	x1 = _x1;
	y1 = _y1;
	t = _t;
}

void line::draw()
{
	drawLine(x0, y0, x1, y1, t, 0, 0, 0);
}