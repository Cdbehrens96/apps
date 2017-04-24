#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	mySound.load("");
	mySound.setMultiPlay(true);

	myStream.setup(this, 0, 2, 44100, 256, 4);

	bufferSize = 256;

	left.assign(bufferSize, 0);
	right.assign(bufferSize, 0);
	volHistory.assign(400, 0);

	ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawBox(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2, 100, 100, 200, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	mySound.setSpeed(ofMap(x, 0, ofGetWindowWidth(), 0, 5));
	mySound.play();
}

void ofApp::audioIn(float * input, int bufferSize, int nChannels) {

	float currentVol = 0;

	int numCounted = 0;

	for (int i = 0; i < 256; i++) {
		left[i] = input[i * 2] * 0.5;
		right[i] = input[i * 2 + 1] *0.5;
		


		currentVol = sqrt(currentVol);

		vol = currentVol;
	}
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
