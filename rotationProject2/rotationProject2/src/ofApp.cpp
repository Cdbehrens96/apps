#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	for (int i = 0; i < NDIAMONDS; i++) {

		int size = (i + 1) * 10; //defines size based on position in array
		int randomX = ofRandom(0, ofGetWidth());
		int randomY = ofRandom(0, ofGetHeight());

		myDiamond[i].setup(randomX, randomY, size);
	}
	//image.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < NDIAMONDS; i++) {
		myDiamond[i].draw();
	}

	
	//image.draw();
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
void ofApp::windowResized(int w, int h){

}
