#ifndef LOGGER_CLASS_HPP
# define LOGGER_CLASS_HPP

#include <string>
#include <iostream>
#include <fstream>

class Logger {
    public:
        Logger(std::string filename);
        void log(std::string const & dest, std::string const & message);

    private:
        void _logToConsole(std::string s);
        void _logToFile(std::string s);
        std::string _makeLogEntry(std::string s);
        std::string _filename;
};

#endif