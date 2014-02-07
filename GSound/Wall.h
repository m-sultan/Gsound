#include "Position.h"
#pragma once
class Wall
{
public:
	Wall(void);
	~Wall(void);
	Position start;
	Position end;
	int attenuation;
};

