#include "Span.class.hpp"

Span::Span(unsigned int const size) :
    _size(size), _content(std::list<int>(size)), _pushed(0) {
}

Span::Span(Span const & src) {
    *this = src;
}

Span::~Span() {
}

Span & Span::operator=(Span const & rhs) {
    this->_size = rhs._size;
    this->_content = rhs._content;
    this->_pushed = rhs._pushed;
    return *this;
}

void Span::addNumber(int n) {
    if (_pushed >= _size) {
        throw std::exception();
    } else {
        _content.push_front(n);
        _pushed++;
    }
}

int Span::shortestSpan() {
    if (!_size)
        throw std::exception();
    int diff = INT_MAX;
    std::list<int>::iterator it1 = _content.begin();
    for (unsigned int i = 0; i < _pushed; i++) {
        std::list<int>::iterator it2 = _content.begin();
        for (unsigned int j = 0; j < _pushed; j++) {
            if (*it1 > *it2)
                diff = it1 != it2 && (*it1 - *it2 < diff) ? *it1 - *it2 : diff;
            else
                diff = it1 != it2 && (*it2 - *it1 < diff) ? *it2 - *it1 : diff;
            it2++;
        }
        it1++;
    }
    return diff;
}

int Span::longestSpan() {
    if (!_size)
        throw std::exception();
   int diff = INT_MIN;
    std::list<int>::iterator it1 = _content.begin();
    for (unsigned int i = 0; i < _pushed; i++) {
        std::list<int>::iterator it2 = _content.begin();
        for (unsigned int j = 0; j < _pushed; j++) {
            if (*it1 > *it2)
                diff = it1 != it2 && (*it1 - *it2 > diff) ? *it1 - *it2 : diff;
            else
                diff = it1 != it2 && (*it2 - *it1 > diff) ? *it2 - *it1 : diff;
            it2++;
        }
        it1++;
    }
    return diff;
}