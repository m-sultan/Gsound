#pragma once
#include "Position.h"
#include "Wall.h"
class Sel_Intersect
{
public:
	Sel_Intersect(void);
	Sel_Intersect(Wall*,Position*);
	~Sel_Intersect(void);
	Position * position;
	Wall * wall;
};

