#include "Logger.class.hpp"

int main(int argc, char *argv[]) {
    if (argc > 1) {
        Logger l(argv[1]);
        l.log("console", "coucou in console");
        l.log("file", "coucou in file");
    }
    return 0;
}