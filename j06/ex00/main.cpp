#include "ScalarConversion.class.hpp"

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 0;
    ScalarConversion sc(argv[1]);
    sc.displayChar();
    sc.displayInt();
    sc.displayFloat();
    sc.displayDouble();
    return 0;
}