#pragma once

#include "ofMain.h"

#define Planet [NUMPLANETS]


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

		ofVec2f planet;
		ofVec2f moon;

		float theta;
		float speed;
		float radius;
		float orbitRadius;

		float x;
		float z;

		

		Planet planet;
		ofVec2f sun;
};
