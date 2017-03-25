#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0);
	myFlash.setup();
	video.loadMovie("Cosa fa un Cavallo ad Halloween.mp4");
	video.play();
}

//--------------------------------------------------------------
void ofApp::update() {
	video.update();
	myFlash.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	video.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	myFlash.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	myFlash._keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

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
