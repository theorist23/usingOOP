#include "arrow_up.h"
void drawLine(int i0, int j0, int i1, int j1, const int t, const float& red, const float& green, const float& blue);
arrow_up::arrow_up(int _x0, int _y0)
{
	x0 = _x0;
	y0 = _y0;
}
void arrow_up::draw()
{
	drawLine(x0, y0 - 30, x0, y0 + 30, 0, 0, 0, 0);
	drawLine(x0 - 20, y0 + 10, x0, y0 + 30, 0, 0, 0, 0);
	drawLine(x0, y0 + 30, x0 + 20, y0 + 10, 0, 0, 0, 0);
}