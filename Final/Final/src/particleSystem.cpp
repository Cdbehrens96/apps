#include "particleSystem.h"
#include "snowParticle.h"

particleSystem::particleSystem(ofPoint location) {
	origin = location;
}

void particleSystem::addParticle() {
	particles.push_back(new particle(origin));
	snow.push_back(new snowParticle(origin));
}

void particleSystem::update() {
	for (int i = 0; i < particles.size(); i++) {
		particles.at(i)->update();
		if (particles.at(i)->isDead()) {
			particles.erase(particles.begin() + i);
		}
	}

	for (int i = 0; i < snow.size(); i++) {
		snow.at(i)->update();
		if (snow.at(i)->isDead()) {
			snow.erase(snow.begin() + i);
		}
	}
}

void particleSystem::display() {
	for (auto& p : particles) {
		if (partCount == 1) {
			std::cout << "ZZZZZ" << endl;
			p->display();
		}
	}

	for (auto& s : snow) {
		if (partCount == 2) {
			std::cout << "XXXXX" << endl;
			s->display();
		}
	}
}

void particleSystem::keyPressed(int key) {
	if (key == 'z') {
		partCount = 1;
		//std::cout << partCount << endl;
	}

	if (key == 'x') {
		partCount = 2;
		//std::cout << partCount << endl;
	}
}