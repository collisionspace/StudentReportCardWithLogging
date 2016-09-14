//
// Created by James Slone on 9/2/16.
//
#include "Logger.h"


void Logger::Log(const std::string& input, string message) {
    cout << message << input << endl;
}
void Logger::LogBool(const bool input, string message) {
    cout << message << (input ? "true" : "false") << endl;
}
