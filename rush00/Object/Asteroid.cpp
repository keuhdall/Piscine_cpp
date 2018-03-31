#include "Asteroid.hpp"

// par defaut, on met les gameobjects en dehors de la fenetre
Asteroid::Asteroid(void) {
    this->pos.x = -1;
    this->pos.y = -1;
    this->enabled = false;
    this->shape[0] = '{';
	this->shape[1] = '}';
	this->shape[2] = '{';
	this->shape[3] = '}';
};

Asteroid::Asteroid(const Asteroid & src) {
	*this = src;
};

// bouge l'objet dans sa direction (pour l'instant toujours vers le bas mais on rajoutera peut etre une direction apres)
void Asteroid::move(void) {
    if (this->enabled)
        this->pos.y += 1;
}

char    Asteroid::getShape(int nb) const
{
    return this->shape[nb];
}

Asteroid & Asteroid::operator=(const Asteroid & rhs) {
	if (this != &rhs) {
	    this->pos.y = rhs.pos.y;
	    this->pos.x = rhs.pos.x;
	    this->enabled = rhs.enabled;
	}
	return *this;
};

Asteroid::~Asteroid(void) {

};
