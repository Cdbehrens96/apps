#include "particle.h"

particle::particle(ofPoint l) {
	acceleration.set(0, 0.05);
	velocity.set(ofRandom(-1, 1), ofRandom(-2, 0));
	squab.set(x, y);
	lifespan = 255.0;
}

void particle::update() {
	velocity += acceleration;
	squab += velocity;
	lifespan -= 2.0;
}

void particle::display() {

	ofSetColor(randomR, randomG, randomB, 100);
	ofDrawCircle(squab, 100);

}

bool particle::isDead() {
	if (lifespan < 0.0) {
		return true;
	}
	else {
		return false;
	}
}