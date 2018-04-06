#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {};

        MutantStack(MutantStack const & src) {
            *this = src;
        }

        virtual ~MutantStack() {}

        MutantStack & operator=(MutantStack const & rhs) {
            return *rhs;
        }

        typedef typename std::deque<T>::iterator iterator;

        iterator begin(void) {
            return this->c.begin();
        }

        iterator end(void) {
            return this->c.end();
        }
};