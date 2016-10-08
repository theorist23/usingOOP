#pragma once
#include "icon_set.h"

class line : public icon_set
{
public:
	int x0, y0, x1, y1, t;
	line(int _x0, int _y0, int _x1, int _y1, int _t);
	void draw();
};
