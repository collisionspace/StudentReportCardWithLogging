//
// Created by James Slone on 9/2/16.
//
#include "Logger.h"

Logger* Logger::logger = NULL;
Logger::Logger(){}
Logger* Logger::getLogger() {
    if (logger == NULL)
         logger = new Logger();
    return logger;
}

void Logger::Log(const std::string& input, string message) {
    cout << message << input << endl;
}
void Logger::Log(const bool input, string message) {
    cout << message << (input ? "true" : "false") << endl;
}
void Logger::Log(const vector<int> &logVector, string message) {
    cout << message << endl;
    for( int i = 0; i < logVector.size(); i++ ) {
        cout << "Vector element " << i  << " = "<< logVector.at(i) << endl;
    }
}

