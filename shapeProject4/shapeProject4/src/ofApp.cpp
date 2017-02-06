#include "ofApp.h"

//--------------------------------------------------------------
void rectangle::setup(){
	//ofRectangle myRectangle = ofGetCurrentViewport();

	//myRectangle.setPosition(300, 300, 0);

}

//--------------------------------------------------------------
void rectangle::update(){
	pct += 0.01f;		// increase by a certain amount
	if (pct > 1) {
		pct = 0;	// just between 0 and 1 (0% and 100%)
	}
	myRectangle.interpolateByPct(pct);
}

//--------------------------------------------------------------
void rectangle::interpolateByPct(float myPct) {
	pos.x = (1 - pct) * posa.x + (pct)* posb.x;
	pos.y = (1 - pct) * posa.y + (pct)* posb.y;
}

//--------------------------------------------------------------
void ofApp::draw(){
	
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


