#pragma once
#include "ofMain.h"

class whiteFlash {
public:

	void setup();
	void update();
	void draw();
	void _keyPressed(int _key);

	whiteFlash();

	bool hitZ = false;
	bool hitX = false;
	bool hitC = false;
	bool hitV = false;

	bool hitA = false;
	bool hitS = false;
	bool hitD = false;
	bool hitF = false;

	bool hitQ = false;
	bool hitW = false;
	bool hitE = false;
	bool hitR = false;

	ofImage phone;
	ofImage redCrosses;
	ofImage flash1;
	ofImage flash2;

	ofImage kerm1;
	ofImage dotLights;
	ofImage yellowDashes;
	ofImage whiteCrossBlips;

	ofImage nick;
	ofImage tea;
	ofImage omg;
	ofImage heart;

	uint64_t time;

};