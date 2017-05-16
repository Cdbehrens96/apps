#pragma once
#include "ofMain.h"

class soundController {
public:

	void setup();
	void update();
	void draw();
	void __keyPressed(int __key);

	soundController();

	ofSoundPlayer horn1;
	ofSoundPlayer horn2;
	ofSoundPlayer save;

	ofSoundPlayer hes1;
	ofSoundPlayer hes2;
	ofSoundPlayer ur;
	ofSoundPlayer im1;
	ofSoundPlayer krabs;

	ofSoundPlayer ball;
	ofSoundPlayer close;
	ofSoundPlayer pressA;
	ofSoundPlayer poison;
	ofSoundPlayer ready;
	ofSoundPlayer go;

	uint64_t time;

	bool fullVol = true;
	bool halfVol = false;
	bool noVol = false;

};