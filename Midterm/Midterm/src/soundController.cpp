#include "soundController.h"

soundController::soundController() {

}

void soundController::setup() {

	horn1.load("horn1.wav");
	horn2.load("horn2.wav");
	save.load("save.wav");

	hes1.load("hes1.wav");
	hes2.load("hes2.wav");
	ur.load("ur.wav");
	im2.load("im1.wav");
	im1.load("im1.wav");

	ball.load("ball.wav");
	close.load("close.wav");
	pressA.load("pressA.wav");
	poison.load("poison.wav");
	ready.load("ready.wav");
	go.load("go.wav");

	phone.loadImage("LL.jpg");

	horn1.setVolume(5.0);

	hitB = false;
	hitN = false;
	hitM = false;

	hitG = false;
	hitH = false;
	hitJ = false;
	hitK = false;
	hitL = false;

	hitT = false;
	hitY = false;
	hitU = false;
	hitI = false;
	hitO = false;
	hitP = false;
}

void soundController::update() {
	if (hitB == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitB = false;
		}
	}

	if (hitN == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitN = false;
		}
	}

	if (hitM == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitM = false;
		}
	}

	//----------------------------------------

	if (hitG == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitG = false;
		}
	}

	if (hitH == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitH = false;
		}
	}

	if (hitJ == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitJ = false;
		}
	}

	if (hitK == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitK = false;
		}
	}

	if (hitL == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitL = false;
		}
	}

	//----------------------------------------

	if (hitT == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitT = false;
		}
	}

	if (hitY == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitY = false;
		}
	}

	if (hitU == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitU = false;
		}
	}

	if (hitI == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitI = false;
		}
	}

	if (hitO == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitO = false;
		}
	}

	if (hitP == true) {
		if (ofGetElapsedTimeMillis() >= time + 150) {
			hitP = false;
		}
	}
}


void soundController::draw() {

	if (hitB == true) {
		horn1.play();
	}

	if (hitN == true) {
		horn2.play();
	}

	if (hitM == true) {
		save.play();
	}

	//----------------------------------------

	if (hitG == true) {
	}

	if (hitH == true) {
	}

	if (hitJ == true) {
	}

	if (hitK == true) {
	}

	if (hitL == true) {
	}

	//----------------------------------------

	if (hitT == true) {
	}

	if (hitY == true) {
	}

	if (hitU == true) {
	}

	if (hitI == true) {
	}

	if (hitO == true) {
	}

	if (hitP == true) {
	}

}

void soundController::__keyPressed(int __key) {
	if (__key == 'b') {
		hitB = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'n') {
		hitN = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'm') {
		hitM = true;
		time = ofGetElapsedTimeMillis();
	}


	//----------------------------------------

	if (__key == 'g') {
		hitG = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'h') {
		hitH = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'j') {
		hitJ = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'k') {
		hitK = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'l') {
		hitL = true;
		time = ofGetElapsedTimeMillis();
	}

	//----------------------------------------

	if (__key == 't') {
		hitT = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'y') {
		hitY = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'u') {
		hitU = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'i') {
		hitI = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'o') {
		hitO = true;
		time = ofGetElapsedTimeMillis();
	}

	if (__key == 'p') {
		hitP = true;
		time = ofGetElapsedTimeMillis();
	}
}