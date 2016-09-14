//
// Created by James Slone on 9/2/16.
//

#ifndef STUDENTREPORTCARD_LOGGER_H
#define STUDENTREPORTCARD_LOGGER_H
#include <string>
#include <iostream>

using namespace std;
class Logger {

    private:
        Logger();
        Logger(Logger const& copy);
        Logger& operator=(Logger const& copy);

    public:
        static Logger* logger;
        static Logger* getLogger();
        void static Log(const std::string& input, string message);
        void static Log(const bool input, string message);


};


#endif //STUDENTREPORTCARD_LOGGER_H
