#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	refCircle1.set(150, 150); //refCircle = ofVec2f(150, 150);
	refCircle2.set(550, 350);
	theta = 0;
	multiplier = 100;
	oscSpeed = 0;

	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update() {
	//theta += ofGetElapsedTimef() * 2;
	theta += 0.010;
	//oscSpeed += 0.8;

	float x = cos(theta);
	float y = sin(theta);

	rotateCircle1.set(refCircle1.x + x*multiplier, refCircle1.y + y*multiplier);
	rotateCircle3.set(150 + refCircle1.x + x*multiplier / 10, 100 + refCircle1.y + y*multiplier / 10);

	x = cos(theta + PI);
	y = sin(theta + PI);

	rotateCircle2.set(refCircle2.x + x*multiplier, refCircle2.y + y*multiplier);
	rotateCircle4.set(250 + refCircle1.x + x*multiplier / 10, 100 + refCircle1.y + y*multiplier / 10);


}

//--------------------------------------------------------------
void ofApp::draw() {

	ofSetColor(255);
	ofDrawCircle(150 + refCircle1.x, 100 + refCircle1.y, 20);
	ofDrawCircle(250 + refCircle1.x, 100 + refCircle1.y, 20);

	ofSetColor(255, 0, 0, 180);
	//ofDrawCircle(refCircle1, 10);
	ofDrawCircle(rotateCircle1, 10);
	ofDrawCircle(rotateCircle2, 10);

	ofSetColor(0, 0, 255);
	ofDrawCircle(rotateCircle3, 10);
	ofDrawCircle(rotateCircle4, 10);

	

	//ofSetColor(255);
	//ofDrawLine(rotateCircle1, rotateCircle2);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

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
