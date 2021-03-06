#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(69, 69, 69);
	frog.load("dwayne.png");
	fly.load("fly.png");
	door.load("door.png");
	collect.load("collect.wav");
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){

	if (gotFly == true) {
		door.draw(ofGetWindowWidth() / 2, 550, 50, 50);
	}

	std::cout << "value: " << frogPosX << endl;

	if (frogPosX < 557) {
		frogPosX += right * speed;
	}

	if (frogPosX > -8) {
		frogPosX += -left * speed;
	}

	if (frogPosY < 556) {
		frogPosY += down * speed;
	}

	if (frogPosY > -8) {
		frogPosY += -up * speed;
	}

	frog.draw(frogPosX, frogPosY, 50, 50);
	if (flyHere) {
		fly.draw(500, 200, 50, 50);
	}
	if(!gotFly){
		if ((frogPosX > 480) && (frogPosX < 520) && (frogPosY > 190) && (frogPosY < 210)) {
			flyGet();
			gotFly = true;
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
		if (key == 'a') {
			if (frogPosX > 0) {
				left = 0.3;
			} else {
				left = 0;
			}
		}

		if (key == 'd') {
			if (frogPosX < 550) {
				right = 0.3;
			}
		}

		if (key == 's') {
			down = 0.3;
		}

		if (key == 'w') {
			up = 0.3;
		}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 'a') {
		left = 0;
	}

	if (key == 'd') {
		right = 0;
	}

	if (key == 's') {
		down = 0;
	}

	if (key == 'w') {
		up = 0;
	}
}

//--------------------------------------------------------------
void ofApp::flyGet() {
	flyHere = false;
	collect.play();
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
