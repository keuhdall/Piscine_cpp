#include <iostream>
#include <fstream>

std::string replace_string(std::string line, std::string s1, std::string s2) {
    std::string tmpStr;
    std::size_t pos = line.find(s1);
    if (pos != std::string::npos) {
        tmpStr = line;
        tmpStr.replace(pos, (s1.length() > s2.length() ? s1.length() : s2.length()), s2);
        std::cout << "comparing " << tmpStr << " with " << line << std::endl;
        if (tmpStr.compare(line)) {
            return replace_string(tmpStr, s1, s2);
        }
    }
    return line;
}

int main(int argc, char *argv[]) {

    if (argc < 4) {
        std::cerr << "Not enough arguments." << std::endl;
    } else {
        std::string filename = argv[1];
        std::ifstream ifs(filename);
        std::ofstream ofs(filename + ".replace");
        std::string line;
        while (std::getline(ifs, line))
            ofs << replace_string(line, argv[2], argv[3]) << std::endl;
        ofs.close();
    }
    return 0;
}