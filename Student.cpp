//
// Created by James Slone on 9/1/16.
//

#include "Student.h"

int Student::idCount = 0;
bool isGradeGreaterThanHundred(double grade) {
    bool flag = grade > HUNDRED;
    Logger::LogBool(flag, "isGradeGreaterThanHundred = ");
    return flag;
}
bool isGradeNegative(double grade) {
    bool flag = grade < ZERO;
    Logger::LogBool(flag, "isGradeNegative = ");
    return flag;
}

double Student::calculateGrade() {
    std::replace_if (marks.begin(), marks.end(), isGradeGreaterThanHundred, HUNDRED);
    std::replace_if (marks.begin(), marks.end(), isGradeNegative, ZERO);
    int sumGrades = std::accumulate(marks.begin(), marks.end(), 0);
    double gradePercent = (sumGrades/(double)marks.size());
    std::string gradePercentToString = std::to_string(gradePercent);
    Logger::Log(gradePercentToString, "calculateGrade = ");
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
    Logger::Log(letter, "calculateLetterGrade = ");
    return letter;
}

void Student::printReport() {
    //string report = "name = " + getName() + "\tid = " + getId() + "\tgrade = " + calculateGrade() + "\t letter grade = " + calculateLetterGrade();
    std::cout << "name = " << getName() << "\tid = " << getId() << "\tgrade = " << calculateGrade() << "\t letter grade = " << calculateLetterGrade() << std::endl;
}


Student Student::operator=(const Student &rhs) {
    return Student(rhs.id, rhs.name, rhs.marks);
}

int Student::getId() {return id;}
string Student::getName() {return name;}
