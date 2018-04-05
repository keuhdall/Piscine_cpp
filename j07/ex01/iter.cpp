#include <iostream>
#include <string>

template<typename T>
void iter(T *a, int size, void( & f)(T & elt)) {
    for (int i = 0; i < size; i++) {
        (f)(a[i]);
    }
}

template<typename T>
void show(T & t) {
    std::cout << t << " ; ";
}

template<typename T>
void incr(T & t) {
    t++;
}

int main()
{
    int i[] = {1, 2, 3, 4, 5, 6};
    char c[] = {'a', 'b', 'c', 'd'};
    float f[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    ::iter(i, 6, show);
    std::cout << std::endl;
    ::iter(c, 4, show);
    std::cout << std::endl;
    ::iter(f, 5, show);
    std::cout << std::endl;
    std::cout << "==============" << std::endl;
    ::iter(i, 6, incr);
    ::iter(c, 4, incr);
    ::iter(f, 5, incr);
    ::iter(i, 6, show);
    std::cout << std::endl;
    ::iter(c, 4, show);
    std::cout << std::endl;
    ::iter(f, 5, show);
    std::cout << std::endl;
    return 0;
}