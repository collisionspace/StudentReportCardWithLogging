//
// Created by James Slone on 9/1/16.
//

#include "Student.h"

int Student::idCount = 0;
bool isGradeGreaterThanHundred(double grade) { return grade > HUNDRED;}
bool isGradeNegative(double grade) { return grade < ZERO;}

double Student::calculateGrade() {
    std::replace_if (marks.begin(), marks.end(), isGradeGreaterThanHundred, HUNDRED);
    std::replace_if (marks.begin(), marks.end(), isGradeNegative, ZERO);
    int sumGrades = std::accumulate(marks.begin(), marks.end(), 0);
    cout << sumGrades << endl;
    return (sumGrades/(double)marks.size());
}

string Student::calculateLetterGrade() {
    double grade = calculateGrade();
    if (grade >= 92) {return "A";}
    else if (grade >= 90) {return "A-";}
    else if (grade >= 88) {return "B+";}
    else if (grade >= 82) {return "B";}
    else if (grade >= 80) {return "B-";}
    else if (grade >= 78) {return "C+";}
    else if (grade >= 72) {return "C";}
    else if (grade >= 70) {return "C-";}
    else if (grade >= 68) {return "D+";}
    else if (grade >= 60) {return "D";}
    return "F";
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