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

using namespace std;

#define ZERO 0
#define HUNDRED 100

class Student {
    private:
        int id;
        string name;
        vector<int> marks;
        static int idCount;

    public:
        //~Student() { delete id; delete name;}
        Student(const string &name, const vector<int> &marks) : id(++idCount), name(name), marks(marks) {};
        double calculateGrade();
        string calculateLetterGrade();
        void printReport();
        static int getIdCount() {return idCount;}
        int getId() {return id;}
        string getName();
};
#endif //STUDENTREPORTCARD_STUDENT_H
