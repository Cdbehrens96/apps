#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	/*ofSetBackgroundColor(0);
	ofNoFill();
	ofSetColor(255, 0, 127);
	ofCircle(ofNoise(ofGetElapsedTimef())*ofGetWidth(), ofNoise(ofGetElapsedTimef())*ofGetHeight(), 20);
	*/

	ofSetBackgroundColor(255, 0, 0);
	ofSetColor(255);

	ofBeginShape();
	for (int i = 0; i < 200; i++) {

		float add = ofNoise(i / 20.0f, ofGetElapsedTimef() * 1200 / (float)ofGetWidth());

		ofVertex(ofGetWindowWidth()/2 + (200 + 100 * add) * cos((i / 200.0)*TWO_PI), 
				 ofGetWindowHeight()/2 + (200 + 100 * add) * sin((i / 200.0)*TWO_PI));
	}
	ofEndShape();

	ofSetColor(255, 0, 0);
	ofBeginShape();
	for (int i = 0; i < 200; i++) {

		float add = ofNoise(i / 20.0f, ofGetElapsedTimef() * 1100 / (float)ofGetWidth());

		ofVertex(ofGetWindowWidth() / 2 + (200 + 80 * add) * cos((i / 200.0)*TWO_PI),
				 ofGetWindowHeight() / 2 + (200 + 80 * add) * sin((i / 200.0)*TWO_PI));
	}
	ofEndShape();
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
