#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	planet.set(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	radius = 50;
	orbitRadius = 200;
	speed = 10;
	sun.set(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2);
	//for (int i = 0; i < NUMPLANETS; i++) {
		donut.speed = 10;
		donut.radius = 20;
		donut.orbitRadius = 200;
	//}

}

//--------------------------------------------------------------
void ofApp::update(){
	theta += 0.001 * speed;

	x = cos(theta) * orbitRadius;
	z = sin(theta) * orbitRadius;
}

//--------------------------------------------------------------
void ofApp::draw(){

	if (z > 0) {

		ofSetColor(255);
		ofDrawCircle(planet, radius);

		ofSetColor(0, 0, 255);
		ofDrawCircle(planet.x + x, planet.y, z, radius);

	}
	else {
		ofSetColor(0, 0, 255);
		ofDrawCircle(planet.x + x, planet.y, z, radius);

		ofSetColor(255);
		ofDrawCircle(planet, radius);
	}


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
