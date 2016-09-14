//
// Created by James Slone on 9/1/16.
//

#ifndef STUDENTREPORTCARD_STUDENT_H
#define STUDENTREPORTCARD_STUDENT_H
#include <string>
#include <vector>
#include <numeric>
#include <zconf.h>
#include <iostream>
#include <algorithm>
#include "Logger.h"

using namespace std;

#define ZERO 0
#define HUNDRED 100

class Student {
    private:
        int id;
        string name;
        vector<int> marks;
        static int idCount;
        Student(const int id,const string &name, const vector<int> &marks) : id(id), name(name), marks(marks) {};
    public:
        ~Student() {}
        Student(const string &name, const vector<int> &marks) : id(++idCount), name(name), marks(marks) {};
        double calculateGrade();
        string calculateLetterGrade();
        void printReport();
        static int getIdCount() {return idCount;}
        int getId();
        string getName();
        Student operator=(const Student &rhs);
};
#endif //STUDENTREPORTCARD_STUDENT_H
