#include "Enemy.class.hpp"

Enemy::Enemy() : _hp(0), _type("undefined") {
}

Enemy::Enemy(int hp, std::string const & type) :
    _hp(hp), _type(type) {
}

Enemy::Enemy(Enemy const & src) {
    *this = src;
}

Enemy::~Enemy() {
}

Enemy & Enemy::operator=(Enemy const & rhs) {
    if (this != &rhs) {
        _hp = rhs.getHP();
        _type = rhs.getType();
    }
    return *this;
}

int Enemy::getHP() const {
    return _hp;
}

std::string const & Enemy::getType() const {
    return _type;
}

void Enemy::takeDamage(int dmg) {
    _hp -= dmg;
    _hp = _hp < 0 ? 0 : _hp;
}