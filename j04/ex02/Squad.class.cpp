#include "Squad.class.hpp"

Squad::Squad() : _squad(NULL), _count(0) {
}

Squad::Squad(Squad const & src) {
    *this = src;
}

Squad::~Squad() {
    for (int i = 0; i < _count; i++) {
        delete _squad[i];
    }
}

Squad & Squad::operator=(Squad const & rhs) {
    for (int i = 0; i < _count; i++) {
        delete _squad[i];
    }
    delete _squad;
    ISpaceMarine **tmp = new ISpaceMarine*[rhs.getCount()];
    for (int i = 0; i < rhs.getCount(); i++) {
        tmp[i] = rhs.getUnit(i)->clone();
    }
    _squad = tmp;
    return *this;
}

int Squad::getCount() const {
    return _count;
}

ISpaceMarine *Squad::getUnit(int n) const {
    if (n < 0 || n >= _count || !_squad) {
        return NULL;
    } else {
        return _squad[n];
    }
}

int Squad::push(ISpaceMarine *s) {
    ++_count;
    ISpaceMarine **tmp = new ISpaceMarine*[_count];
    for (int i = 0; i < _count - 1; i++) {
        tmp[i] = _squad[i];
    }
    delete _squad;
    tmp[_count - 1] = s;
    _squad = tmp;
    return _count;
}