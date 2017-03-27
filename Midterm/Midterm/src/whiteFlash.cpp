#include "whiteFlash.h"

whiteFlash::whiteFlash() {

}

void whiteFlash::setup() {
	redCrosses.loadImage("redCrosses.png");
	flash1.loadImage("flash1.png");
	flash2.loadImage("flash2.png");

	whiteBumps.loadImage("whiteBumps.png");
	dotLights.loadImage("dotLights.png");
	yellowDashes.loadImage("yellowDash.png");
	whiteCrossBlips.loadImage("whiteCrossBlips.png");

	nick.loadImage("nick.png");
	tea.loadImage("tea.png");
	omg.loadImage("omg.png");
	heart.loadImage("heart.png");

	phone.loadImage("LL.jpg");
	kerm1.loadImage("kerm1.png");
	squidRave.loadImage("squidRave.png");

	shell1.load("shell1.png");
	shell2.load("shell2.png");
	shell3.load("shell3.png");
	shell4.load("shell4.png");
	shell5.load("shell5.png");
	shell8.load("shell8.png");
	shell9.load("shell9.png");
	shell10.load("shell10.png");
	shell11.load("shell11.png");
	shell12.load("shell12.png");
	shell13.load("shell13.png");
	shell14.load("shell14.png");
	shell15.load("shell15.png");
	shell16.load("shell16.png");

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

	//----------------------------------------

	if (hitB == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitB = false;
		}
	}

	if (hitN == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitN = false;
		}
	}

	if (hitM == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitM = false;
		}
	}

	//----------------------------------------

	if (hitG == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitG = false;
		}
	}

	if (hitH == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitH = false;
		}
	}

	if (hitJ == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitJ = false;
		}
	}

	if (hitK == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitK = false;
		}
	}

	if (hitL == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitL = false;
		}
	}

	//----------------------------------------

	if (hitT == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitT = false;
		}
	}

	if (hitY == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitY = false;
		}
	}

	if (hitU == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitU = false;
		}
	}

	if (hitI == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitI = false;
		}
	}

	if (hitO == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitO = false;
		}
	}

	if (hitP == true) {
		if (ofGetElapsedTimeMillis() >= time + 200) {
			hitP = false;
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
		whiteBumps.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	//----------------------------------------

	if (hitA == true) {
		ofSetColor(255);
		flash2.draw(-100, 50, ofGetWindowWidth(), ofGetWindowHeight());
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



	if (hitB == true) {
		shell1.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitN == true) {
		kerm1.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitM == true) {
		shell3.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	//----------------------------------------

	if (hitG == true) {
		phone.draw((ofGetWindowWidth() / 2) - 250, (ofGetWindowHeight() / 2) - 384);
	}

	if (hitH == true) {
		//shell5.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
		ofSetColor(0);
		ofRect(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
		ofSetColor(255);
	}

	if (hitJ == true) {
		shell8.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitK == true) {
		squidRave.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitL == true) {
		shell10.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
		ofSetColor(125);
	}

	//----------------------------------------

	if (hitT == true) {
		shell11.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitY == true) {
		shell12.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitU == true) {
		shell13.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitI == true) {
		shell14.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitO == true) {
		shell15.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	}

	if (hitP == true) {
		shell16.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
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

	//----------------------------------------

	if (_key == 'b') {
		hitB = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'n') {
		hitN = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'm') {
		hitM = true;
		time = ofGetElapsedTimeMillis();
	}


	//----------------------------------------

	if (_key == 'g') {
		hitG = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'h') {
		hitH = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'j') {
		hitJ = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'k') {
		hitK = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'l') {
		hitL = true;
		time = ofGetElapsedTimeMillis();
	}

	//----------------------------------------

	if (_key == 't') {
		hitT = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'y') {
		hitY = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'u') {
		hitU = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'i') {
		hitI = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'o') {
		hitO = true;
		time = ofGetElapsedTimeMillis();
	}

	if (_key == 'p') {
		hitP = true;
		time = ofGetElapsedTimeMillis();
	}
}