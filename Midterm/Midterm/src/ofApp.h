#pragma once

 //#define OF_VIDEO_PLAYER_QUICKTIME
#include "ofMain.h"
#include "whiteFlash.h"
#include "soundController.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	bool _hit = false;
	bool movieStart = false;

	vector<float> myFloats;

	const int MAX_SIZE = 100;

	ofVec2f gravity;

	whiteFlash myFlash;

	soundController mySounds;

	ofVideoPlayer video;

};
