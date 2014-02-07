#include "Sel_Intersect.h"


Sel_Intersect::Sel_Intersect(void)
{
}

Sel_Intersect::Sel_Intersect(Wall *wall, Position *position)
{
	this->position=position;
	this->wall=wall;
	
}

Sel_Intersect::~Sel_Intersect(void)
{
}
