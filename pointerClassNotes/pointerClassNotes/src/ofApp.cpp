#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	a = 3;
	b = &a;
	b += 1;

	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;
	cout << "*&a: " << *&a << endl;

	*b = 9;

	cout << "b: " << *b << endl;

	myBunny = new bunny(ofVec2f(100, 100), 4, 3);

	monsterBunny = new bunny(ofVec2f(500, 500), 10, 2);

	myBunny->numOfEars = 2;
	myBunny->pos = ofVec2f(100, 100);
}

//--------------------------------------------------------------
void ofApp::update(){
	myBunny->move();
	monsterBunny->move();
}

//--------------------------------------------------------------
void ofApp::draw(){
	myBunny->draw();
	monsterBunny->draw();
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
