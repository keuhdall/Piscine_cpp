#pragma once
#include <exception>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

template<typename T>
typename T::iterator find(T a, int b) {
    (void)b;
    for (typename T::iterator it = a.begin();
    it != a.end(); it++) {
        if (*it == b) {
            return it;
        }
    }
    throw std::exception();
}