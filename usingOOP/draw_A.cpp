#include "draw_A.h"
void drawLine(int i0, int j0, int i1, int j1, const int t, const float& red, const float& green, const float& blue);
draw_A::draw_A(int _x0, int _y0)
{
	x0 = _x0;
	y0 = _y0;
}
void draw_A::draw()
{
	drawLine(x0 - 30, y0 - 30, x0, y0 + 30, 0, 0, 0, 0);
	drawLine(x0, y0 + 30, x0 + 30, y0 - 30, 0, 0, 0, 0);
	drawLine(x0 - 15, y0, x0 + 15, y0, 0, 0, 0, 0);
}