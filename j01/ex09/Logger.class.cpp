#include "Logger.class.hpp"

Logger::Logger(std::string filename) : _filename(filename) {
}

void Logger::log(std::string const & dest, std::string const & message) {
    void (Logger::*funArray[2])(std::string s) = {&Logger::_logToConsole, &Logger::_logToFile};
    std::string strArray[2] = {"console", "file"};
    for (int i = 0; i < 2; i++) {
        if (!dest.compare(strArray[i])) {
            (this->*(funArray[i]))(message);
        }
    }
}

std::string Logger::_makeLogEntry(std::string s) {
    time_t logTime = time(0);
    tm *ltime = localtime(&logTime);
    char *timeStr = NULL;
    strftime(timeStr, sizeof(timeStr), "%Y%m%d%H%M%S", ltime);
    return (std::string(timeStr) + " " + s);
}

void Logger::_logToConsole(std::string s) {
    std::cout << _makeLogEntry(s) << std::endl;
}

void Logger::_logToFile(std::string s) {
    std::ofstream ofs(_filename);
    ofs << _makeLogEntry(s) << std::endl;
}