#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetCircleResolution(8);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float radius = 25;
	float angle = ofGetElapsedTimef() * 5;

	float x = mouseX + radius * cos(angle);
	float y = mouseY + radius * sin(angle);

	ofSetColor(255, 255, 0);
	ofCircle(x, y, 6);

	x = mouseX + radius * cos(angle + PI / 2);
	y = mouseY + radius * sin(angle + PI / 2);

	ofCircle(x, y, 9);

	x = mouseX + radius * cos(angle + PI);
	y = mouseY + radius * sin(angle + PI);

	ofCircle(x, y, 12);


	x = mouseX + radius * cos(angle + PI * 1.5);
	y = mouseY + radius * sin(angle + PI * 1.5);

	ofCircle(x, y, 15);

	float sinOfTime = sin(ofGetElapsedTimef() * 2);
	float sinOfTimeMapped = ofMap(sinOfTime, -1, 1, 5, 50);

	radius = 0;
	
	x = mouseX + radius * cos(angle);
	y = mouseY + radius * sin(angle);

	ofSetColor(0, 255, 255, 122);
	ofCircle(x, y, sinOfTimeMapped);
	
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
