#pragma once
#include "ofMain.h"

class whiteFlash {
public:

	void setup();
	void update();
	void draw();
	void _keyPressed(int _key);
	void flash2load();

	whiteFlash();

	bool hitZ = false;
	bool hitX = false;
	bool hitC = false;
	bool hitV = false;

	bool hitA = false;
	bool hitS = false;
	bool hitD = false;
	bool hitF = false;

	ofImage phone;
	ofImage flash1;
	ofImage flash2;

	ofImage kerm1;
	ofImage dotLights;

	uint64_t time;

};