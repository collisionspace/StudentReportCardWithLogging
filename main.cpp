#include "Student.h"
int main() {
    //A's
    Student *student1 = new Student("Mike",std::vector<int> {100,120,90});
    student1 -> printReport();
    Student *student2 = new Student("Greg",std::vector<int> {91,91,90,89});
    student2 -> printReport();

    //B's
    Student *student3 = new Student("Herbet",std::vector<int> {89,90,87,88,88,90});
    student3 -> printReport();
    Student *student4 = new Student("Dave",std::vector<int> {85,83,84,84,86,90});
    student4 -> printReport();
    Student *student5 = new Student("Steve",std::vector<int> {20,50,85,90,73,95,95,99,99,99});
    student5 -> printReport();

    //C's
    Student *student6 = new Student("Austin",std::vector<int> {78,81,79,77,79});
    student6 -> printReport();
    Student *student7 = new Student("Bob",std::vector<int> {76,79,73,74,77,72});
    student7 -> printReport();
    Student *student8 = new Student("John",std::vector<int> {70,69,73,73,72,71,70,68});
    student8 -> printReport();

    //D's
    Student *student9 = new Student("Mickey",std::vector<int> {68,67,69,68,67,69,70,70,69,68,67,67,90});
    student9 -> printReport();
    Student *student10 = new Student("Lauren",std::vector<int> {60,68,65,66,61,64,68,10,90});
    student10 -> printReport();

    //F's
    Student *student11 = new Student("Ashley",std::vector<int> {1,-5,50,30,60,25,90});
    student11 -> printReport();

    student4 -> printReport();

    Student *student12 = student4;
    student12 -> printReport();
    return 0;
}

