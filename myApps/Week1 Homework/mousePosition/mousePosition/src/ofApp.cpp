#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	whut.load("nickYoungMii.jpg");
	mortalKombat.load("mk5style.ttf", 90);

	horn1.load("horn1.wav");
	ready.load("ready.wav");
	go.load("go.wav");

	horn1.setVolume(1.0);

	ready.play();

	ready.setSpeed(0.3);

	//ready.setLoop(true);

	video.loadMovie("Fox_5_News_KORN_RIP_QUEENS_NYC_Graffiti.avi");

	video.play();


	cam.initGrabber(550, 400);

}

//--------------------------------------------------------------
void ofApp::update(){
	//called in update because moving frames, always needs to be updated
	video.update();

	video.play();

	cam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

	video.draw(200, 600);

	video.play();

	//ofSetColor(255, 255, 255);
	//ofDrawLine(200, 100, 600, 300);

	//ofSetColor(0, 0, 0);
	//ofDrawCircle(200, 200, 100);

	//x and y center, width, height
	ofSetColor(120, 120, 0);
	ofDrawEllipse(400, 200, 300, 100);

	//ofSetColor(0, 0, 0);
	//ofDrawRectangle(100, 100, 200, 100);

	ofSetColor(120, 0, 0);
	ofDrawRectRounded(0, ofGetMouseX(), 100, 200, 50);

	ofSetColor(0, 0, 0);
	ofDrawSphere(ofGetMouseY(), 750, 50);

	//red text and image
	ofSetColor(120, 0, 0);
	mortalKombat.drawString("yerrrr????", 400, 400);

	//follows mouse
	whut.draw(ofGetMouseX()-200, ofGetMouseY()-200, 400, 400);

	//yellow text and image
	ofSetColor(120, 120, 0);
	mortalKombat.drawString("yerrrr????", 420, 420);

	//stays centered
	whut.draw(ofGetWidth()/2 - 100, ofGetHeight() / 2 - 100, 200, 200);

	cam.draw(0, 400);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {
	case 'a':
		horn1.play();
		break;
	}
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
