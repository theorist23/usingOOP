#pragma once
#include "icon_set.h"

class arrow_right : public icon_set
{
public:
	int x0, y0, x1, y1;
	arrow_right(int _x0, int _y0);
	void draw();
};
