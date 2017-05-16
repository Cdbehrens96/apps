#include "visControl1.h"

visControl1::visControl1() {

}

void visControl1::setup() {
	hitZ = false;
	spark = new particleSystem(ofPoint(ofGetWidth() / 2, 50));
}

void visControl1::update() {
	spark->addParticle();
	spark->update();

	if (hitZ == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitZ = false;
		}
	}

	if (hitX == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitX = false;
		}
	}
}

void visControl1::draw() {
	if (hitZ == true) {
		spark->display();
		//ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitX == true) {
		spark->display();
		//ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}
}

void visControl1::_keyPressed(int _key) {
	if (_key == 'z') {
		hitZ = true;
		time = ofGetElapsedTimeMillis();
		spark->keyPressed(_key);
	}

	if (_key == 'x') {
		hitX = true;
		time = ofGetElapsedTimeMillis();
		spark->keyPressed(_key);
	}
}

