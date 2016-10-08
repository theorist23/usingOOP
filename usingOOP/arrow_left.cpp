#include "arrow_left.h"
void drawLine(int i0, int j0, int i1, int j1, const int t, const float& red, const float& green, const float& blue);
arrow_left::arrow_left(int _x0, int _y0)
{
	x0 = _x0;
	y0 = _y0;
}
void arrow_left::draw()
{
	drawLine(x0 - 30, y0, x0 + 30, y0, 0, 0, 0, 0);
	drawLine(x0 - 30, y0, x0 - 10, y0 - 20, 0, 0, 0, 0);
	drawLine(x0 - 30, y0, x0 - 10, y0 + 20, 0, 0, 0, 0);
}