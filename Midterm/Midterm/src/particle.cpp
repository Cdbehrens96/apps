/* #include "particle.h"

particle::particle(ofVec2f pos) {

	myPos = pos;

	myVel = ofVec2f(ofRandom(-2.f, 2.f), ofRandom(-2.f, 2.f));

	myLifeSpan = INITIAL_LIFE_SPAN;

	ofImage img;
	img.loadImage("kermit1.png");
	ofPixels kerm1;

	
}

void particle::setup() {
	
}

void particle::update(float changeInVel) {
	myVel += myAccel;
	myPos += myVel * changeInVel;

	if (myLifeSpan > 0) {
		myLifeSpan -= 1.f;
	}
}

void particle::draw() {

	if (myLifeSpan > 90) {
		ofSetColor(0, 255, 255);
	}
	else {
		ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
	}
	float size = ofMap(myLifeSpan, 0, 100, 0, 5);
	//kerm1.draw(400, 400, 10, 10);

	int i = 0;
	while (i < kerm1.size()) {
		char c = kerm1[i];
		i++;
	}
}

void particle::applyForce(ofVec2f force) {
	myAccel = force;
} */