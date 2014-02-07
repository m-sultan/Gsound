#include "Wall.h"
#include "Listner.h"
#include "Source.h"
#pragma once
class Scene
{
public:
	Scene(void);
	~Scene(void);
	Wall * walls[4];
	Scene(Wall,Wall,Wall,Wall);
	Listner listner;
	Source source;
};

