#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	beat.loadSound("Photoshoot.wav");

	fftSmooth = new float[8192];
	for (int i = 0; i < 8192; i++) {
		fftSmooth[i] = 0;
	}

	bands = 64;

	beat.setLoop(true);
	beat.setVolume(0.6);
}

//--------------------------------------------------------------
void ofApp::update(){
	ofSoundUpdate(); //gets updates from the sound into the spectrum

	float * value = ofSoundGetSpectrum(bands);
	for (int i = 0; 1 < bands; i++) {
		fftSmooth[i] *= 0.9f;
		if (fftSmooth[i] < value[i]) {
			fftSmooth[i] = value[i];
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	for (int i = 0; i < bands; i++) {
		ofRectangle myRect(0, 0, -(fftSmooth[i]*150), 100);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {
	case '1':
		beat.play();
			break;

	case '2':
		beat.stop();
		break;
	}
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
