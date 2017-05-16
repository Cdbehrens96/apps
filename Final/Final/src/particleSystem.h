#pragma once
#include "ofMain.h"
#include "particle.h"
#include "snowParticle.h"

class particleSystem {

public:
	particleSystem(ofPoint);
	void update();
	void display();
	void addParticle();
	void keyPressed(int key);

	ofPoint origin;
	vector<particle*> particles;
	vector<snowParticle*> snow;
	int partCount = 0;
};