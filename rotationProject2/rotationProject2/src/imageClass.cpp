#include "imageClass.h"

void ImageClass::setup() {
	image.loadImage("nickYoungMii.jpg");
}

void ImageClass::draw() {
	image.draw(100, 100);
}