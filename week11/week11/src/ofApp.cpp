#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	video1.loadMovie("Mortal Kombat (1992) - The Fatalities (Arcade).mp4");
}

//--------------------------------------------------------------
void ofApp::update(){
	video1.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(255);
	//video1.setSpeed(1);
	video1.draw(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	ofSetColor(255, 255, 255, 125);
	//video1.setSpeed(0.8);
	video1.draw(ofGetMouseX()*0.2, ofGetMouseY()*0.2, ofGetWindowWidth()*0.8, ofGetWindowHeight()*0.8);
	ofSetColor(255, 255, 255, 125);
	//video1.setSpeed(0.6);
	video1.draw(ofGetMouseX()*0.4, ofGetMouseY()*0.4, ofGetWindowWidth()*0.64, ofGetWindowHeight()*0.64);
	video1.play();
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
