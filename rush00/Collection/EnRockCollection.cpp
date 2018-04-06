#include "EnRockCollection.hpp"
#include "../Engine.hpp"

EnRockCollection::EnRockCollection(void) {

	this->size = 10;
	this->data = new Rocket[this->size];
};

EnRockCollection::EnRockCollection(const EnRockCollection &copy) {
	*this = copy;
};

void EnRockCollection::fire(int y, int x) {
	Rocket *rkt;

	for (int i = 0; i < this->size; i++) {
		rkt = (Rocket*)&this->data[i];
		if (!rkt->getEnabled()) {
			rkt->setPosition(y, x);
			rkt->setEnabled(true);
			return;
		}
	}
}

void EnRockCollection::updateObjects(int maxHeight) {
	Rocket *obj;

	if (!this->checkElapsedTime(100))
		return;

	// parcours de tous les object pour les desactiver si ils sont sortis de l'ecran
	// et les faire bouger le cas echeant
	for (int i = 0; i < this->size; i++) {
		obj = (Rocket*)&this->data[i];
		if (obj->getEnabled()) {
			if (obj->getPosition().y > maxHeight) {
				obj->setEnabled(false);
			}
		}
		obj->demove();
	}
}


bool	EnRockCollection::checkCollision(Pilot *pilot) {
	AObject *e_rocket;
    AObject *rocket;

	for (int i = 0; i < this->getSize(); i++) {
        e_rocket = (Rocket*)&this->data[i];
        if (!e_rocket->getEnabled())
            continue;
        for (int i = 0; i < pilot->getRockets().getSize(); i++) {
            rocket = pilot->getRockets().get(i);
            if (!rocket->getEnabled())
                continue;
            if (rocket->getPosition().y == e_rocket->getPosition().y && rocket->getPosition().x == e_rocket->getPosition().x) {
                e_rocket->setPosition(-1, -1);
                e_rocket->setEnabled(false);
                rocket->setPosition(-1, -1);
                rocket->setEnabled(false);
				Engine::ammo++;
                break;
            }
        }
        if (e_rocket->getPosition().y == pilot->getPosition().y && e_rocket->getPosition().x == pilot->getPosition().x) {
            return true;
        }
    }
	return false;
}

EnRockCollection & EnRockCollection::operator=(const EnRockCollection &copy) {
	this->data = copy.data;
	this->size = copy.size;
	this->lastUpdate = copy.lastUpdate;
	return *this;
};

EnRockCollection::~EnRockCollection(void) {
	delete [] this->data;
};
