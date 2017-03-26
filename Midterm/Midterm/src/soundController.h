#pragma once
#include "ofMain.h"

class soundController {
public:

	void setup();
	void update();
	void draw();
	void __keyPressed(int __key);

	soundController();

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

	ofImage phone;

	ofSoundPlayer horn1;
	ofSoundPlayer horn2;
	ofSoundPlayer save;

	ofSoundPlayer hes1;
	ofSoundPlayer hes2;
	ofSoundPlayer ur;
	ofSoundPlayer im1;
	ofSoundPlayer im2;

	ofSoundPlayer ball;
	ofSoundPlayer close;
	ofSoundPlayer pressA;
	ofSoundPlayer poison;
	ofSoundPlayer ready;
	ofSoundPlayer go;

	uint64_t time;

};