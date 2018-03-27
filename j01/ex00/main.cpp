#include "Pony.class.hpp"

void ponyOnTheStack() {
    Pony stackPonies[5];
    for (int i = 0; i < 5; i++) {
        stackPonies[i].jump();
    }
}

void ponyOnTheHeap() {
    Pony *heapPonies = new Pony[5];
    for (int i = 0; i < 5; i++) {
        heapPonies[i].jump();
    }
    delete [] heapPonies;
}

int main() {
    ponyOnTheStack();
    std::cout << "====== We left ponyOnTheStack function ======" << std::endl;
    ponyOnTheHeap();
    std::cout << "====== We left ponyOnTheHeap function ======" << std::endl;
    return 0;
}