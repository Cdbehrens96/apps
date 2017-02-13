#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	position = ofVec2f(100, 200);
	initialVel = ofVec2f(1, -2);
	gravity = -9.8;
	acceleration = ofVec2f(0, gravity);
	friction = 0.9;
	velocity = ofVec2f(1, -2);
	radius = 15;
	rectHeight = 100;
}

//--------------------------------------------------------------
void ofApp::update(){
	time = ofGetElapsedTimef();
	velocity = initialVel + acceleration * time;
	position += velocity;

	if (position.y <= 0) {

		initialVel.y = initialVel.y * -1 * friction;
		initialVel.x *= friction;
		ofResetElapsedTimeCounter();

	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundAuto(true);
	ofSetColor(255, 0, 155);
	ofDrawRectRounded(position, 200, rectHeight, 50);
	ofDrawRectRounded(position + 200, 200, rectHeight, 50);
	ofDrawRectRounded(position + 400, 200, rectHeight, 50);

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
	ofSetColor(255, 0, 155);
	ofDrawRectRounded(ofGetMouseX(), ofGetMouseY(), 200, rectHeight, 50);
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
