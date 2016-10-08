#include "f_rect.h"
void drawRectF(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);
f_rect::f_rect(int _x0, int _y0, int _x1, int _y1)
{
	x0 = _x0;
	y0 = _y0;
	x1 = _x1;
	y1 = _y1;
}
void f_rect::draw()
{
	drawRectF(x0, y0, x1, y1, 0, 0, 0);
}