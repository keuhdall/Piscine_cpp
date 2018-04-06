#pragma once

#include <stdexcept>
#include <list>

class Span {
    public:
        Span();
        Span(unsigned int const size);
        Span(Span const & src);
        virtual ~Span();
        Span & operator=(Span const & rhs);
        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);

    private:
        unsigned int _size;
        std::list<int> _content;
        unsigned int _pushed;
};