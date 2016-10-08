#pragma once
#include "icon_set.h"

class icon : public icon_set
{
public:
	int x0, y0, r, t;
	double xpos, ypos;
	icon(int _x0, int _y0, int _r, int _t, double _xpos, double _ypos);
	void draw();
};