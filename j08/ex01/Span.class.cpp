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
}

void Span::addNumber(int n) {
    _pushed++;
    if (_pushed >= _size) {
        throw std::exception();
    } else {
        _content.push_back(n);
    }
}

int Span::shortestSpan() {
    if (!_size)
        throw std::exception();
    for (std::list<int>::iterator it = _content.begin();
        it != _content.end(); it++) {
            
        }
}