#include "rect.h"
void drawRect(int x0, int y0, int x1, int y1, int t, float r1, float g1, float b1);
rect::rect(int _x0, int _y0, int _x1, int _y1, int _t)
{
	x0 = _x0;
	y0 = _y0;
	x1 = _x1;
	y1 = _y1;
	t = _t;
}
void rect::draw()
{
	drawRect(x0, y0, x1, y1, t, 0, 0, 0);
}