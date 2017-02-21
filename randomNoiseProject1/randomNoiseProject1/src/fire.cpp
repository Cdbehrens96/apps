#include "fire.h"

fire::fire() {

}

void fire::setup() {
	
}

void fire::draw() {

	ofSetColor(fireRed, fireGreen, 0);

	ofBeginShape();
	for (int i = 0; i < 100; i++) {

		float add = ofNoise(i / 20.0f, ofGetElapsedTimef() * fireSpeed / (float)ofGetWidth());

		ofVertex(x + (20 + 20 * add) * cos((i / 100.0)*-PI),
				 y + (50 + 60 * add) * sin((i / 100.0)*-PI));
	}
	ofEndShape();
}