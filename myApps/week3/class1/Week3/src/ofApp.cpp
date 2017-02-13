#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	refCircle.set(150, 150); //same as refCircle = ofVec2f(150, 150);
	theta = 0;
	multiplier = 10;
	oscSpeed = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
	//theta += ofGetElapsedTimef() * 2;
	theta += 0.05;
	oscSpeed += 1;

	float x = cos(theta);
	float y = sin(theta);

	sinCircle.set(refCircle.x + oscSpeed, (refCircle.y + y*multiplier));
	cosCircle.set(refCircle.x + x*multiplier, refCircle.y + oscSpeed);

	rotateCircle.set(refCircle.x + x*multiplier, refCircle.y + y*multiplier);
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofNoFill();

	ofSetColor(255, 0, 0);
	ofDrawCircle(refCircle, 10);

	ofSetColor(0, 255, 0);
	ofDrawCircle(sinCircle, 10);

	ofSetColor(0, 0, 255);
	ofDrawCircle(cosCircle, 10);

	ofSetColor(255, 255, 0);
	ofDrawCircle(rotateCircle, 10);

	ofSetColor(255);
	ofDrawLine(rotateCircle, sinCircle);
	ofDrawLine(rotateCircle, cosCircle);

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
