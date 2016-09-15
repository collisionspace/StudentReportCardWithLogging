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
    Student(const int id,const string &name, const vector<int> &marks) : id(id), name(name), marks(marks) {Logger::getLogger();};
public:
    ~Student() {}
    Student(const string &name, const vector<int> &marks) : id(++idCount), name(name), marks(marks) {Logger::getLogger();};
    Student(const Student &student);
    double calculateGrade();
    string calculateLetterGrade();
    string printReport();
    void setId(int);
    int getId() const;
    string getName() const;
    void setName(string);
    void setMarks(const vector<int> &grade);
    Student operator=(const Student &rhs);
    const vector<int> &getMarks() const;
    static int getIdCount();
};
#endif //STUDENTREPORTCARD_STUDENT_H
