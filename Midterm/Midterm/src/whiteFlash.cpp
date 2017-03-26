#include "whiteFlash.h"

whiteFlash::whiteFlash() {

}

void whiteFlash::setup() {
	phone.loadImage("LL.jpg");
	redCrosses.loadImage("redCrosses.png");
	flash1.loadImage("flash1.png");
	flash2.loadImage("flash2.png");

	kerm1.loadImage("kerm1.png");
	dotLights.loadImage("dotLights.png");
	yellowDashes.loadImage("yellowDash.png");
	whiteCrossBlips.loadImage("whiteCrossBlips.png");

	nick.loadImage("nick.png");
	tea.loadImage("tea.png");
	omg.loadImage("omg.png");
	heart.loadImage("heart.png");

	hitZ = false;
	hitX = false;
	hitC = false;
	hitV = false;

	hitA = false;
	hitS = false;
	hitD = false;
	hitF = false;

	hitQ = false;
	hitW = false;
	hitE = false;
	hitR = false;
}

void whiteFlash::update() {
	if (hitZ == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitZ = false;
		}
	}

	if (hitX == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			ofSetColor(255, 0, 0, 125);
			hitX = false;
		}
	}

	if (hitC == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitC = false;
		}
	}

	if (hitV == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitV = false;
		}
	}

	//----------------------------------------

	if (hitA == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitA = false;
		}
	}

	if (hitS == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitS = false;
		}
	}

	if (hitD == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitD = false;
		}
	}

	if (hitF == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitF = false;
		}
	}

	//----------------------------------------

	if (hitQ == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitQ = false;
		}
	}

	if (hitW == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitW = false;
		}
	}

	if (hitE == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitE = false;
		}
	}

	if (hitR == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitR = false;
		}
	}
}


void whiteFlash::draw() {

	if (hitX == true) {
		ofSetColor(255, 0, 0);
		redCrosses.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitC == true) {
		ofSetColor(255);
		flash1.draw(200, -50, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitV == true) {
		ofSetColor(0, 0, 255, 125);
		flash2.draw(-100, 50, ofGetWindowWidth(), ofGetWindowHeight());
	}

	//----------------------------------------

	if (hitA == true) {
		ofSetColor(255, 255, 255, 95);
		kerm1.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitS == true) {
		ofSetColor(255);
		dotLights.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
		ofSetColor(255, 255, 0);
	}

	if (hitD == true) {
		ofSetColor(255);
		yellowDashes.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitF == true) {
		ofSetColor(255);
		whiteCrossBlips.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	//----------------------------------------

	if (hitQ == true) {
		ofSetColor(255);
		nick.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
		ofSetColor(0, 255, 255);
	}

	if (hitW == true) {
		ofSetColor(255);
		tea.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitE == true) {
		ofSetColor(255);
		omg.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitR == true) {
		ofSetColor(255);
		heart.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	//----------------------------------------

	if (hitZ == true) {
		ofSetColor(255);
		ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}
}

void whiteFlash::_keyPressed(int _key) {
	if (_key == 'z') {
		hitZ = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'x') {
		hitX = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'c') {
		hitC = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'v') {
		hitV = true;
		time = ofGetElapsedTimeMillis();
	}

	//----------------------------------------

	if (_key == 'a') {
		hitA = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 's') {
		hitS = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'd') {
		hitD = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'f') {
		hitF = true;
		time = ofGetElapsedTimeMillis();
	}

	//----------------------------------------

	if (_key == 'q') {
		hitQ = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'w') {
		hitW = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'e') {
		hitE = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'r') {
		hitR = true;
		time = ofGetElapsedTimeMillis();
	}
}