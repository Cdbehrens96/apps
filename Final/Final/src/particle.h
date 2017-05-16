#pragma once
#include "ofMain.h"

class particle {
public:
	particle(ofPoint);
	void update();
	void display();
	bool isDead();

	float  x = ofRandom(0, ofGetWidth()*1.5);
	float  y = ofRandom(0, ofGetHeight()*1.5);
	ofPoint squab;
	ofPoint velocity;
	ofPoint acceleration;
	float lifespan;
	float randomR = ofRandom(0, 255);
	float randomG = ofRandom(0, 255);
	float randomB = ofRandom(0, 255);

};