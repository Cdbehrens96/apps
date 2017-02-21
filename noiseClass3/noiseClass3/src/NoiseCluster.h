#pragma once
#include "ofMain.h"

class NoiseCluster {
public:
	NoiseCluster();
	void orbit(ofVec2f center);
	float noiseColor(float xOff);
	void setup();
	void update();
	void draw();

	float speed, radius, orbitRadius;
	float x, y, theta;
	ofVec2f position;
	float xOff, start, inc;

};