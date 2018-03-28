#include "Logger.class.hpp"

Logger::Logger(std::string filename) : _filename(filename) {
}

std::string Logger::_makeLogEntry(std::string s) {
    std::stringstream	ss;
	time_t now = time(0);

	tm *ltm = localtime(&now);
	ss << "[" << 1900 + ltm->tm_year
	<< std::setfill ('0') << std::setw (2)
	<< 1 + ltm->tm_mon << std::setfill ('0') << std::setw (2)
	<< ltm->tm_mday << "_" << std::setfill ('0') << std::setw (2)
	<< 1 + ltm->tm_hour << std::setfill ('0') << std::setw (2)
	<< 1 + ltm->tm_min << std::setfill ('0') << std::setw (2)
	<< 1 + ltm->tm_sec << "] " << s;
    return (ss.str());
}

void Logger::_logToConsole(std::string s) {
    std::cout << _makeLogEntry(s) << std::endl;
}

void Logger::_logToFile(std::string s) {
    std::ofstream ofs(_filename);
    ofs << _makeLogEntry(s) << std::endl;
}

void Logger::log(std::string const & dest, std::string const & message) {
    void (Logger::*funArray[2])(std::string s) = {&Logger::_logToConsole, &Logger::_logToFile};
    std::string strArray[2] = {"console", "file"};
    for (int i = 0; i < 2; i++) {
        if (!dest.compare(strArray[i]))
            (this->*(funArray[i]))(message);
    }
}