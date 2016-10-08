#pragma once
#include "icon_set.h"

class draw_X :public icon_set
{
public:
	int x0, y0, x1, y1;
	draw_X(int _x0, int _y0);
	void draw();
};
