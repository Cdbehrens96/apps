#pragma once
#define NDIAMONDS 10
#include "ofMain.h"

class diamond {
public:
	void setup(float _x, float _y, int _dim);
	void draw();

	float x;
	float y;
	int dim;
	ofColor color;

	diamond();
};
