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

	bool hitB = false;
	bool hitN = false;
	bool hitM = false;

	bool hitG = false;
	bool hitH = false;
	bool hitJ = false;
	bool hitK = false;
	bool hitL = false;

	bool hitT = false;
	bool hitY = false;
	bool hitU = false;
	bool hitI = false;
	bool hitO = false;
	bool hitP = false;

	ofImage redCrosses;
	ofImage flash1;
	ofImage flash2;

	ofImage whiteBumps;
	ofImage dotLights;
	ofImage yellowDashes;
	ofImage whiteCrossBlips;

	ofImage nick;
	ofImage tea;
	ofImage omg;
	ofImage heart;

	ofImage phone;
	ofImage kerm1;
	ofImage squidRave;

	ofImage shell1;
	ofImage shell2;
	ofImage shell3;
	ofImage shell4;
	ofImage shell5;
	ofImage shell8;
	ofImage shell9;
	ofImage shell10;
	ofImage shell11;
	ofImage shell12;
	ofImage shell13;
	ofImage shell14;
	ofImage shell15;
	ofImage shell16;

	uint64_t time;

};