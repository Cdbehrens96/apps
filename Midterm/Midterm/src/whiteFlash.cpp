#include "whiteFlash.h"

whiteFlash::whiteFlash() {

}

void whiteFlash::setup() {
	phone.loadImage("LL.jpg");
	flash1.loadImage("flash1.png");
	flash2.loadImage("flash2.png");

	kerm1.loadImage("kerm1.png");
	dotLights.loadImage("dotLights.png");

	hitZ = false;
	hitX = false;
	hitC = false;
	hitV = false;

	hitA = false;
	hitS = false;
	hitD = false;
	hitF = false;	
}

void whiteFlash::update() {
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
}


void whiteFlash::draw() {
	if (hitZ == true) {
		ofSetColor(255);
		ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitX == true) {
		ofSetColor(255, 0, 0, 125);
		ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
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
}