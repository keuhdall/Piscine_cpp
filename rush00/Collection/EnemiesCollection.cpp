#include "EnemiesCollection.hpp"
#include "../Engine.hpp"

EnemiesCollection::EnemiesCollection(void)
{
	this->size = 40;
	this->data = new Enemy[this->size];
};

EnemiesCollection::EnemiesCollection (const EnemiesCollection &copy){
	*this = copy;
};

void EnemiesCollection::updateObjects() {
	Enemy *obj;

	if (!this->checkElapsedTime(300))
		return;
	// parcours de tous les object pour les desactiver si ils sont sortis de l'ecran
	// et les faire bouger le cas echeant
	for (int i = 0; i < this->size; i++) {
		obj = (Enemy*)&this->data[i];
		if (obj->getEnabled()) {
			if (obj->getPosition().y > Engine::maxHeight) {
				obj->setEnabled(false);
			}
			obj->move();
		} else {
			// on active un enemy
			if (arc4random() % 100 < 20) { // le faire que dans 1% des cas
				obj->setPosition(arc4random() % Engine::maxHeight - Engine::maxHeight, ((arc4random() % Engine::maxWidth) / 2) * 2);
				obj->setEnabled(true);
			}
		}
	}
}

void	EnemiesCollection::maybeShoot(EnRockCollection &e_rockets) {
	Enemy *obj;

	for (int i = 0; i < this->getSize(); i++) {
		obj = (Enemy*)&this->data[i];
		if (obj->getEnabled()) {
			if (arc4random() % 10000 < 1) {
				e_rockets.fire(obj->getPosition().y+1, obj->getPosition().x);
			}
		}
	}

}

bool	EnemiesCollection::checkCollision(Pilot *pilot, int *score) {
	AObject *enemy;
    AObject *rocket;

	for (int i = 0; i < this->getSize(); i++) {
        enemy = (Enemy*)&this->data[i];
        if (!enemy->getEnabled())
            continue;
        for (int i = 0; i < pilot->getRockets().getSize(); i++) {
            rocket = pilot->getRockets().get(i);
            if (!rocket->getEnabled())
                continue;
            // si la rocket est sur un ennemi
            if (rocket->getPosition().y == enemy->getPosition().y && rocket->getPosition().x == enemy->getPosition().x) {
                (*score)++;
                enemy->setPosition(-1, -1);
                enemy->setEnabled(false);
                rocket->setPosition(-1, -1);
                rocket->setEnabled(false);
				Engine::ammo++;
                break;
            }
        }
        if (enemy->getPosition().y == pilot->getPosition().y && enemy->getPosition().x == pilot->getPosition().x) {
            return true;
        }
    }
	return false;
}

EnemiesCollection & EnemiesCollection::operator=(const EnemiesCollection &copy) {
	if (this != &copy){
		this->data = copy.data;
		this->size = copy.size;
		this->lastUpdate = copy.lastUpdate;
	}
	return *this;
};

EnemiesCollection::~EnemiesCollection(void) {
	delete [] this->data;
}
