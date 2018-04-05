#include "Array.class.hpp"

#include <iostream>

int main() {
    Array<int> arr_test;
    Array<int> arr_i(3);
    Array<std::string> arr_str(5);

    try {
        std::cout << arr_test[0] << std::endl;
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }

    arr_i[0] = 1;
    arr_i[1] = 2;
    arr_i[2] = 3;

    arr_str[0] = "abc";
    arr_str[1] = "def";
    arr_str[2] = "ghi";
    arr_str[3] = "jkl";
    arr_str[4] = "mno";

    std::cout << "size : " << arr_i.size() << std::endl;

    for (unsigned int i = 0; i < arr_i.size(); i++) {
        std::cout << arr_i[i] << std::endl;
    }

    for (unsigned int i = 0; i < arr_str.size(); i++) {
        std::cout << arr_str[i] << std::endl;
    }

    try {
        arr_str[-1] = "coucou";
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    } try {
        arr_str[5] = "coucou";
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}