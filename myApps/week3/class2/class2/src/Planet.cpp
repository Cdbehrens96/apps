#include "Planet.h"



Planet::Planet()
{
}


void Planet::update()
{
}

void Planet::orbit()
{
	float x = cos(theta) * orbitRadius;
	float y = sin(theta) * orbitRadius;
	position.set(reference.x + x, reference.y + y);
}

void Planet::draw()
{
}