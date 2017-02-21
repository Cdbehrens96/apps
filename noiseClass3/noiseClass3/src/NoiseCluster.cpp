#include "NoiseCluster.h"

NoiseCluster::NoiseCluster() {

}

void NoiseCluster::orbit(ofVec2f center) {
	x = sin(theta) * orbitRadius + ofMap(ofNoise(theta), 0, 1, 0, orbitRadius);
	y = cos(theta) * orbitRadius + ofMap(ofNoise(theta + 100), 0, 1, 0, orbitRadius);

	position.set(center.x + x, center.y + y);
}

float NoiseCluster::noiseColor(float xOff) {
	return ofMap(ofNoise(xOff), 0, 1, 0, 255);
}

void NoiseCluster::setup() {
	radius = 2;
	theta = 0;
	inc = 0.01;
	speed = 10;
	orbitRadius = 300;
}
void NoiseCluster::update() {

}

void NoiseCluster::draw() {
	ofSetBackgroundAuto(false);
	orbitRadius = ofMap(ofNoise(theta), 0, 1, 0, 300);

	orbit(ofVec2f(ofGetWindowWidth() / 2, ofGetWindowHeight() / 2));

	ofSetColor(noiseColor(theta), noiseColor(theta + 10), noiseColor(theta + 100));
	ofDrawCircle(position, radius);
}