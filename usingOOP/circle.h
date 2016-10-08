#pragma once
#include "icon_set.h"
class circle : public icon_set
{
public:
	int x0, y0, r, t;
	circle(int _x0, int _y0, int _r, int _t);
	void draw();
};