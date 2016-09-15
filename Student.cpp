//
// Created by James Slone on 9/1/16.
//

#include "Student.h"

Logger* logger;

int Student::idCount = 0;
bool isGradeGreaterThanHundred(double grade) {
    bool flag = grade > HUNDRED;
    logger->Log(flag, "isGradeGreaterThanHundred = ");
    return flag;
}

bool isGradeNegative(double grade) {
    bool flag = grade < ZERO;
    logger->Log(flag, "isGradeNegative = ");
    return flag;
}

double Student::calculateGrade() {
    std::replace_if (marks.begin(), marks.end(), isGradeGreaterThanHundred, HUNDRED);
    std::replace_if (marks.begin(), marks.end(), isGradeNegative, ZERO);
    int sumGrades = std::accumulate(marks.begin(), marks.end(), 0);
    double gradePercent = (sumGrades/(double)marks.size());
    std::string gradePercentToString = std::to_string(gradePercent);
    logger->Log(gradePercentToString, "calculateGrade = ");
    return gradePercent;
}

string Student::calculateLetterGrade() {
    double grade = calculateGrade();
    string letter = "";
    if (grade >= 92) {letter = "A";}
    else if (grade >= 90) {letter = "A-";}
    else if (grade >= 88) {letter = "B+";}
    else if (grade >= 82) {letter = "B";}
    else if (grade >= 80) {letter = "B-";}
    else if (grade >= 78) {letter = "C+";}
    else if (grade >= 72) {letter = "C";}
    else if (grade >= 70) {letter = "C-";}
    else if (grade >= 68) {letter = "D+";}
    else if (grade >= 60) {letter = "D";}
    else {letter = "F"; }
    logger->Log(letter, "calculateLetterGrade = ");
    return letter;
}

string Student::printReport() {
    string report =  "name = " + getName() + "\tid = " + std::to_string(getId()) + "\tgrade = " + std::to_string(calculateGrade()) + "\t letter grade = " + calculateLetterGrade();
    logger->Log(report, "Report : ");
    return report;
}


Student Student::operator=(const Student &rhs) {
    if (this != &rhs) {
        id = rhs.id;
        name = rhs.name;
        marks = rhs.marks;
    }
    return *this;
}

//copy constructor
Student::Student(const Student &student) : id(*new int(student.id)), name(*new string(student.name)), marks(*new vector<int>(student.marks)) {}

void Student::setId(int identity) {
    id = identity;
    logger->Log(std::to_string(id),"setID = ");
}
int Student::getId() const {
    Logger::Log(std::to_string(id), "ID = ");
    return id;
}
void Student::setName(string person) {
    name = person;
    logger->Log(person,"setName = ");
}
string Student::getName() const {
    logger->Log(name, "Name = ");
    return name;
}
void Student::setMarks(const vector<int> &grade) {
    marks = grade;
}

const vector<int> &Student::getMarks() const {
    logger->Log(marks, "getMarks = ");
    return marks;
}

int Student::getIdCount() {
    logger->Log(std::to_string(idCount), "getIdCount = ");
    return idCount;
}
