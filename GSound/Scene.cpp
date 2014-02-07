#include "Scene.h"


Scene::Scene(void)
{
}

Scene::Scene(Wall w1,Wall w2,Wall w3,Wall w4)
{
	walls[0]=&w1;
	walls[1]=&w2;
	walls[2]=&w3;
	walls[3]=&w4;
}

Scene::~Scene(void)
{
}
