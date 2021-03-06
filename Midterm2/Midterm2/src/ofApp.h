#pragma once

#include "ofMain.h"
#include "frog.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void flyGet();
		
		ofImage frog;
		ofImage fly;
		ofImage door;

		float speed = 3.0;

		float frogPosX = 50;
		float frogPosY = 200;

		float left = 0;
		float right = 0;
		float up = 0;
		float down = 0;

		bool flyHere = true;
		bool gotFly = false;

		ofSoundPlayer collect;
};
