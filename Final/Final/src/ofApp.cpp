#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0);
		cntrl1.setup();
		cntrl2.setup();
		mySounds.setup();
		video.loadMovie("liveSet2.mov");
}

//--------------------------------------------------------------
void ofApp::update() {
		cntrl1.update();
		cntrl2.update();
		mySounds.update();
		video.update();

		if (press6 == true) {
			if (ofGetElapsedTimeMillis() >= time + 200) {
				press6 = false;
			}
		}
}

//--------------------------------------------------------------
void ofApp::draw() {
	video.draw(xPos, yPos, 1440, 1080);
	xPos = 240;
	yPos = 0;
	if (press6 == true) {
		xPos = (ofRandom(0, 480));
		yPos = (ofRandom(-240, 240));
	}

	if (press6 == false) {
		xPos = 240;
		yPos = 0;
	}
	if (vis4 == true) {
		cntrl1.draw();
	}
	if (vis5 == true) {
		cntrl2.draw();
	}
	mySounds.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	
	mySounds.__keyPressed(key);
	
	if (key == 'z') {
		video.play();
	}

	if (vis4 == true) {
		cntrl1._keyPressed(key);
		std::cout << "vis4" << endl;
	} else { cntrl2.__keyPressed(key); }

	if (vis5 == true) {
		cntrl2.__keyPressed(key);
		//std::cout << "vis5" << endl;
	} else { cntrl1._keyPressed(key); }

	if (key == '4') {
		vis4 = true;
		vis5 = false;
	}

	if (key == '5') {
		vis4 = false;
		vis5 = true;
	}

	if (key == '6') {
		press6 = true;
		time = ofGetElapsedTimeMillis();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	cntrl2.keyReleased(key);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
