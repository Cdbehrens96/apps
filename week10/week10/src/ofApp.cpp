#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetVerticalSync(true);
	cam.setDistance(0);
	cam.enableMouseInput();
	cout << cam.getFov() << endl;
	cam.setFov(60);
	cout << cam.getFarClip() << endl;


	pointLight.setPosition(0, ofGetWindowHeight() / 2, 0);

	pointLight.setDiffuseColor(ofColor(255, 255, 255));
	pointLight.setSpecularColor(ofColor(255, 255, 255));

	myMat.setShininess(120);

	get.load("get.wav");
	get.setSpeed(1.0);

	box.set(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(0);

	cam.begin();

	ofPushMatrix();
	ofEnableLighting();
	pointLight.enable();
	pointLight.draw();

	ofTranslate(-ofGetWindowWidth() / 2, 0);

	myMat.begin();
	box.setPosition(ofGetWidth() / 2, ofGetHeight() / 2, 0);
	box.rotate(10, 1, 0, 0);
	myMat.end();
	ofPopMatrix();
	cam.end();

	float xPos = ofGetMouseX();
	float yPos = ofGetMouseY();

	if ((xPos < 200) && (yPos < 200)) {
		half1 = 255;
	}
	else {
		half1 = 125;
	}

	if ((xPos > 600) && (yPos < 200)) {
		half2 = 255;
	}
	else {
		half2 = 125;
	} 

	if ((xPos < 200) && (yPos > 600)) {
		half3 = 255;
	}
	else {
		half3 = 125;
	}

	if ((xPos > 600) && (yPos > 600)) {
		half4 = 255;
	}
	else {
		half4 = 125;
	}

	ofSetColor(255, 255, 0, half1);
	ofDrawEllipse(100, 100, 200, 200);

	ofSetColor(255, 255, 0, half2);
	ofDrawEllipse((ofGetWindowWidth()) - 100, 100, 200, 200);

	ofSetColor(255, 255, 0, half3);
	ofDrawEllipse(100, (ofGetWindowHeight()) - 100, 200, 200);

	ofSetColor(255, 255, 0, half4);
	ofDrawEllipse((ofGetWindowWidth()) - 100, (ofGetWindowHeight()) - 100, 200, 200);
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
	float xPos = ofGetMouseX();
	float yPos = ofGetMouseY();

	if ((xPos < 200) && (yPos < 200)) {
		get.setSpeed(2.0);
		get.play();
	}

	if ((xPos > 600) && (yPos < 200)) {
		get.setSpeed(1.0);
		get.play();
	}

	if ((xPos < 200) && (yPos > 600)) {
		get.setSpeed(0.5);
		get.play();
	}

	if ((xPos > 600) && (yPos > 600)) {
		get.setSpeed(0.25);
		get.play();
	}
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
