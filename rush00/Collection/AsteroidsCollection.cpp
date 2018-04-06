#include "AsteroidsCollection.hpp"
#include "../Engine.hpp"

AsteroidsCollection::AsteroidsCollection(void)
{
	this->size = 40;
	this->data = new Asteroid[this->size];
};

AsteroidsCollection::AsteroidsCollection (const AsteroidsCollection &copy){
	*this = copy;
};

void AsteroidsCollection::updateObjects() {
	Asteroid *obj;

	if (!this->checkElapsedTime(600))
		return;

	// parcours de tous les object pour les desactiver si ils sont sortis de l'ecran
	// et les faire bouger le cas echeant
	for (int i = 0; i < this->size; i++) {
		obj = (Asteroid*)&this->data[i];
		if (obj->getEnabled()) {
			if (obj->getPosition().y > Engine::maxHeight) {
				obj->setEnabled(false);
			}
		} else {
			if (arc4random() % 100 < 1) { // le faire que dans 1% des cas
				obj->setPosition(arc4random() % Engine::maxHeight - Engine::maxHeight, ((arc4random() % Engine::maxWidth) / 2) * 2);
				obj->setEnabled(true);
			}
		}
		obj->move();
	}
}

bool	AsteroidsCollection::checkCollision(Pilot *pilot)
{
	AObject *asteroid;
	AObject	*rocket;
	int		rx, ry, ax, ay;

	for (int i = 0; i < this->getSize(); i++) {
		asteroid = this->get(i);
		if (!asteroid->getEnabled())
			continue;
		ax = asteroid->getPosition().x;
		ay = asteroid->getPosition().y;
		if (ay == pilot->getPosition().y && (ax == pilot->getPosition().x || ax+1 == pilot->getPosition().x || ax+2 == pilot->getPosition().x || ax+3 == pilot->getPosition().x))
			return true;
		for (int i = 0; i < pilot->getRockets().getSize(); i++) {
			rocket = pilot->getRockets().get(i);
			if (!rocket->getEnabled())
				continue;
			rx = rocket->getPosition().x;
			ry = rocket->getPosition().y;
			if (ry == ay && (rx == ax || rx == ax+1 || rx == ax+2 || rx == ax+3) ) {
				rocket->setPosition(-1, -1);
				rocket->setEnabled(false);
				Engine::ammo++;
				break;
			}
		}
	}
	return false;
}

AsteroidsCollection & AsteroidsCollection::operator=(const AsteroidsCollection &copy) {
	if (this != &copy){
		this->data = copy.data;
		this->size = copy.size;
		this->lastUpdate = copy.lastUpdate;
	}
	return *this;
};

AsteroidsCollection::~AsteroidsCollection(void) {
	delete [] this->data;
}
