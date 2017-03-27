#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(0);
	myFlash.setup();
	mySounds.setup();
	video.loadMovie("liveSet2small.mov");
	//video.play();

	movieStart = false;
}

//--------------------------------------------------------------
void ofApp::update() {
	video.update();
	mySounds.update();
	myFlash.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	video.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	myFlash.draw();
	mySounds.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	myFlash._keyPressed(key);
	mySounds.__keyPressed(key);
	if (key == 'z') video.play();
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
