#pragma once
#include "ofMain.h"

class snowParticle {
public:
	snowParticle(ofPoint);
	void update();
	void display();
	bool isDead();

	float  x = ofRandom(0, ofGetWidth());
	float  y = ofRandom(0, ofGetHeight());
	ofPoint squab;
	ofPoint velocity;
	ofPoint acceleration;
	float lifespan;

};