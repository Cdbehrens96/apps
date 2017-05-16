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
	im1.load("im1.wav");
	krabs.load("krabs.wav");

	ball.load("ball.wav");
	close.load("close.wav");
	pressA.load("pressA.wav");
	poison.load("poison.wav");
	ready.load("ready.wav");
	go.load("go.wav");

	fullVol = true;
	halfVol = false;
	noVol = false;

	
}

void soundController::update() {
	if (fullVol == true) {
		horn1.setVolume(1.0);
		horn2.setVolume(1.0);
		save.setVolume(1.0);

		hes1.setVolume(1.0);
		hes2.setVolume(1.0);
		ur.setVolume(1.0);
		im1.setVolume(1.0);
		krabs.setVolume(0.6);

		ball.setVolume(1.0);
		close.setVolume(1.0);
		pressA.setVolume(1.0);
		poison.setVolume(1.0);
		ready.setVolume(1.0);
		go.setVolume(1.0);
	}

	if (halfVol == true) {
		horn1.setVolume(0.5);
		horn2.setVolume(0.5);
		save.setVolume(0.5);

		hes1.setVolume(0.5);
		hes2.setVolume(0.5);
		ur.setVolume(0.5);
		im1.setVolume(0.5);
		krabs.setVolume(0.3);

		ball.setVolume(0.5);
		close.setVolume(0.5);
		pressA.setVolume(0.5);
		poison.setVolume(0.5);
		ready.setVolume(0.5);
		go.setVolume(0.5);
	}

	if (noVol == true) {
		horn1.setVolume(0.0);
		horn2.setVolume(0.0);
		save.setVolume(0.0);

		hes1.setVolume(0.0);
		hes2.setVolume(0.0);
		ur.setVolume(0.0);
		im1.setVolume(0.0);
		krabs.setVolume(0.0);

		ball.setVolume(0.0);
		close.setVolume(0.0);
		pressA.setVolume(0.0);
		poison.setVolume(0.0);
		ready.setVolume(0.0);
		go.setVolume(0.0);
	}
}


void soundController::draw() {

	

}

void soundController::__keyPressed(int __key) {
	if (__key == 'b') {
		horn1.play();
	}

	if (__key == 'n') {
		horn2.play();
	}

	if (__key == 'm') {
		save.play();
	}


	//----------------------------------------

	if (__key == 'g') {
		hes1.play();
	}

	if (__key == 'h') {
		hes2.play();
	}

	if (__key == 'j') {
		ur.play();
	}

	if (__key == 'k') {
		im1.play();
	}

	if (__key == 'l') {
		krabs.play();
	}

	//----------------------------------------

	if (__key == 't') {
		ball.play();
	}

	if (__key == 'y') {
		close.play();
	}

	if (__key == 'u') {
		pressA.play();
	}

	if (__key == 'i') {
		poison.play();
	}

	if (__key == 'o') {
		ready.play();
	}

	if (__key == 'p') {
		go.play();
	}

	//----------------------------------------

	if (__key == '1') {
		noVol = true;
		halfVol = false;
		fullVol = false;
	}

	if (__key == '2') {
		noVol = false;
		halfVol = true;
		fullVol = false;
	}

	if (__key == '3') {
		noVol = false;
		halfVol = false;
		fullVol = true;
	}
}