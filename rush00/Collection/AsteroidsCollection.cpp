#include "AsteroidsCollection.hpp"
#include "../Engine.hpp"

AsteroidsCollection::AsteroidsCollection(void)
{
	this->size = 20;
	this->data = new Asteroid[this->size];
};

AsteroidsCollection::AsteroidsCollection (const AsteroidsCollection &copy){
	*this = copy;
};

void AsteroidsCollection::updateObjects() {
	Asteroid *obj;

	if (!this->checkElapsedTime(100))
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
