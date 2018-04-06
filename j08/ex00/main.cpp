#include "easyfind.hpp"

int main(void)
{
    int values[] = {0, 12, 42, 1, -5, 10, 100};
    std::list<int> l(values, values + sizeof(values) / sizeof(int));
    std::vector<int> v(values, values + sizeof(values) / sizeof(int));

    int count = 0;
    try {
        std::list<int>::iterator found = find< std::list<int> >(l, 1);
        for (std::list<int>::iterator it = found; it != l.end(); it++) {
            std::cout << "coucou4" << std::endl;
            count++;
        }
        std::cout << "The value 1 was found at index " << count << std::endl;
    } catch (std::exception & e) {
        std::cerr << "Error : value not found." << std::endl;
    }

    try {
        std::vector<int>::iterator found = find< std::vector<int> >(v, 100);
        for (std::vector<int>::iterator it = found; it != v.end(); it++) {
            count++;
        }
        std::cout << "The value 100 was found at index " << count << std::endl;
    } catch (std::exception & e) {
        std::cerr << "Error : value not found." << std::endl;
    }

    try {
        std::vector<int>::iterator found = find< std::vector<int> >(v, 1337);
        for (std::vector<int>::iterator it = found; it != v.end(); it++) {
            count++;
        }        std::cout << "The value 1337 was found at index " << count << std::endl;
    } catch (std::exception & e) {
        std::cerr << "Error : value not found." << std::endl;
    }

    return 0;
}