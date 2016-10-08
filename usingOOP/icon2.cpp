#include "icon2.h"
void drawIcon2(int x0, int y0, int x1, int y1, int t, float r1, float g1, float b1, float r2, float g2, float b2, double xpos, double ypos);
icon2::icon2(int _x0, int _y0, int _x1, int _y1, int _t, double _xpos, double _ypos)
{
	x0 = _x0;
	y0 = _y0;
	x1 = _x1;
	y1 = _y1;
	t = _t;
	xpos = _xpos;
	ypos = _ypos;
}
void icon2::draw()
{
	drawIcon2(x0, y0, x1, y1, t, 0, 0, 1, 0.8, 0, 0.8, xpos, ypos);
}