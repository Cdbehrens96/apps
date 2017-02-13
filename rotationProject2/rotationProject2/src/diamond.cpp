#include "diamond.h"

diamond::diamond() {

}

void diamond::setup(float _x, float _y, int _dim) {
	
	x = _x;
	y = _y;
	dim = _dim;

	

	ofSetVerticalSync(true);

	ofBackground(0, 0, 0);

	ofSetCircleResolution(4);
}

void diamond::draw() {

	float radius = 50;
	float angle = ofGetElapsedTimef() * 15;

	ofSetColor(color);

	float xpos = ofGetMouseX() + radius * cos(angle);
	float ypos = ofGetMouseY() + radius * sin(angle);

	float sinOfTime = sin(ofGetElapsedTimef() * 2);
	float sinOfTimeMapped = ofMap(sinOfTime, -1, 1, ofRandom(1, 5), ofRandom(20, 50));

	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
	ofCircle(xpos, ypos, sinOfTimeMapped);

	xpos = ofGetMouseX() + radius * cos(angle + PI);
	ypos = ofGetMouseY() + radius * sin(angle + PI);

	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
	ofCircle(xpos, ypos, sinOfTimeMapped);
}