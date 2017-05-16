#include "snowParticle.h"

snowParticle::snowParticle(ofPoint l) {
	acceleration.set(0, 0.05);
	velocity.set(ofRandom(-1, 1), ofRandom(-2, 0));
	squab.set(x, y);
	lifespan = 255.0;
}

void snowParticle::update() {
	velocity += acceleration;
	squab += velocity;
	lifespan -= 2.0;
}

void snowParticle::display() {

	ofSetColor(255);
	ofDrawCircle(squab, 5);

}

bool snowParticle::isDead() {
	if (lifespan < 0.0) {
		return true;
	}
	else {
		return false;
	}
}