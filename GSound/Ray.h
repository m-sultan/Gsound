#include "Position.h"
#include "Wall.h"
#pragma once
class Ray
{
public:
	Ray(void);
	Ray(Position,int,int,int/*,int*/);
	~Ray(void);
	Position Start;
	int Angle;
	int Depth;
	int Weigtht;
	//int Length;
	bool Detect_Object();
	Ray RelfetiveRay(Position);
	Position Detect_Object(int i);
};

