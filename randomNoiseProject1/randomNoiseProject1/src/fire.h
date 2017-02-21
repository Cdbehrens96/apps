#pragma once
#define NFIRE 30
#include "ofMain.h"

class fire {
public:
	void setup();
	void draw();
	float  x = ofRandom(0, ofGetWidth());
	float  y = ofRandom(100, ofGetHeight());
	float  fireSpeed = ofRandom(600, 1800);
	float  fireRed = ofRandom(122, 255);
	float  fireGreen = ofRandom(0, 122);

	fire();
};
