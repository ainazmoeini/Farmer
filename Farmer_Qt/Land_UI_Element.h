#ifndef LANDUI_H
#define LANDUI_H
#include "Land.h"

class Land_UI_Element
{
public:
	Land* land;
	int x;
	int y;
	Land_UI_Element(int x, int y, Land* land)
	{
		this->land = land;
		this->x = x;
		this->y = y;
	}
};

#endif