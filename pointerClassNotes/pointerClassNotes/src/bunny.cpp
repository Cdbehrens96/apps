#include "bunny.h"

bunny::bunny(ofVec2f pos, int numOfEars, int numOfHeads) {
	this->pos = pos;
	this->numOfEars = numOfEars;
	this->numOfHead = numOfHeads;
}

void bunny::draw() {

	for (int i = 0; i < numOfEars; i++) {
		ofDrawEllipse(pos.x + i * 10, pos.y - 40, 10, 40);
	}

	for (int i = 0; i < numOfHead; i++) {
		ofDrawCircle(pos.x + i * 10, pos.y, 40);
	}

}

void bunny::move() {

}