#pragma once
#include "ofMain.h"

class bunny {
public:
	bunny(ofVec2f pos, int numOfEars, int numOfHeads);

	void draw();
	void move();

	int numOfEars;
	int numOfHead;

	ofVec2f pos;

};