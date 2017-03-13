#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);

	for (int i = 0; i < 1; i++) {
		particle myParticle;
		float vx = ofRandom(-4, 4);
		float vy = ofRandom(-4, 4);
		myParticle.setInitialCondition(300, 300, vx, vy);
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].resetForce();
		particles[i].addDampingForce();
		particles[i].update();
	}

	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(0);

	ofFill();
	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
	}
	/*
	ofNoFill();
	ofBeginShape();
	for (int i = 0; i < particles.size(); i++) {
		ofVertex(particles[i].pos.x, particles[i].pos.y);
	}
	ofEndShape();
	*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	prevMouseX = x;
	prevMouseY = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
	float dx = x - prevMouseX;
	float dy = y - prevMouseY;

	particle myParticle;
	myParticle.setInitialCondition(x, y, dx*0.3, dy*0.3);
	particles.push_back(myParticle);

	prevMouseX = x;
	prevMouseY = y;
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	for (int i = 0; i < particles.size(); i++) {
		float vx = ofRandom(-4, 4);
		float vy = ofRandom(-4, 4);
		particles[i].setInitialCondition(mouseX, mouseY, vx, vy);
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
