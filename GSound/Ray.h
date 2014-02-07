#include "Position.h"
#include "Wall.h"
#include "Sel_Intersect.h"
#include "Scene.h"
#pragma once
class Ray
{
public:
	Ray(void);
	Ray(Position,Position,int,int);
	~Ray(void);
	Position * Start;
	Position * End;
	int Weigtht;
	int Length;
	//bool Detect_Object();
	Position ReflectRay(Ray *,double);
	Sel_Intersect* Intersect(Ray*,Scene*);
	void Propogate (Scene*);
	Position *Chk_Intersect(Wall*);
};

