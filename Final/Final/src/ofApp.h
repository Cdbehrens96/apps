#pragma once

#include "ofMain.h"
#include "visControl1.h"
#include "visControl2.h"
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

	bool vis4 = false;
	bool vis5 = false;
	bool press6 = false;
	bool press7 = false;

	int xPos = 240;
	int yPos = 0;

	visControl1 cntrl1;
	visControl2 cntrl2;
	soundController mySounds;

	ofVideoPlayer video;

	uint64_t time;
};