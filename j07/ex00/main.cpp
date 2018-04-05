#include <iostream>
#include <string>

template<typename T>
void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T a, T b) {
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b) {
    return (a > b ? a : b);
}

int main (void)
{
    int a = 1;
    int b = 2;

    float c = 3.0;
    float d = 4.0;

    bool e = true;
    bool f = false;

    std::string g = "coucou";
    std::string h = "salut";

    std::cout << "a = " << a << " ; b = " << b << std::endl;
    std::cout << "min : " << ::min<int>(a, b) << std::endl;
    std::cout << "max : " << ::max<int>(a, b) << std::endl;
    std::cout << "===== swap =====" << std::endl;
    ::swap<int>(a, b);
    std::cout << "a = " << a << " ; b = " << b << std::endl;
    std::cout << "================" << std::endl;

    std::cout << "c = " << c << " ; d = " << d << std::endl;
    std::cout << "min : " << ::min<float>(c, d) << std::endl;
    std::cout << "max : " << ::max<float>(c, d) << std::endl;
    std::cout << "===== swap =====" << std::endl;
    ::swap<float>(c, d);
    std::cout << "c = " << c << " ; d = " << d << std::endl;
    std::cout << "================" << std::endl;

    std::cout << "e = " << e << " ; f = " << f << std::endl;
    std::cout << "min : " << ::min<bool>(e, f) << std::endl;
    std::cout << "max : " << ::max<bool>(e, f) << std::endl;
    std::cout << "===== swap =====" << std::endl;
    ::swap<bool>(e, f);
    std::cout << "e = " << e << " ; f = " << f << std::endl;
    std::cout << "================" << std::endl;

    std::cout << "g = " << g << " ; h = " << h << std::endl;
    std::cout << "min : " << ::min(g, h) << std::endl;
    std::cout << "max : " << ::max(g, h) << std::endl;
    std::cout << "===== swap =====" << std::endl;
    ::swap(g, h);
    std::cout << "g = " << g << " ; h = " << h << std::endl;
    std::cout << "================" << std::endl;

    return 0;
}

/*
int main(void) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}*/