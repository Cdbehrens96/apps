#pragma once
#include "ofMain.h"
#include "particleSystem.h"

class visControl1 {
public:

	void setup();
	void update();
	void draw();
	void _keyPressed(int _key);

	visControl1();

	bool hitZ = false;
	bool hitX = false;


	particleSystem* spark;

	uint64_t time;
};