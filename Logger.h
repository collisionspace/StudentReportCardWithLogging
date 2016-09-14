//
// Created by James Slone on 9/2/16.
//

#ifndef STUDENTREPORTCARD_LOGGER_H
#define STUDENTREPORTCARD_LOGGER_H
#include <string>
#include <iostream>

using namespace std;
class Logger {

    public:
        void static Log(const std::string& input, string message);
        void static LogBool(const bool input, string message);


};


#endif //STUDENTREPORTCARD_LOGGER_H
