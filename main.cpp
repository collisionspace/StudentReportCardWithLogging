#include "Student.h"
int main() {
    //A's
    Student student1 = Student("Mike",std::vector<int> {100,120,90});
    student1.printReport();
    Student student2 = Student("Greg",std::vector<int> {91,91,90,89});
    student2.printReport();

    //B's
    Student student3 = Student("Herbert",std::vector<int> {89,90,87,88,88,90});
    student3.printReport();
    Student student4 = Student("Dave",std::vector<int> {85,83,84,84,86,90});
    student4.printReport();
    Student student5 = Student("Steve",std::vector<int> {20,50,85,90,73,95,95,99,99,99});
    student5.printReport();

    //C's
    Student student6 = Student("Austin",std::vector<int> {78,81,79,77,79});
    student6.printReport();
    Student student7 = Student("Bob",std::vector<int> {76,79,73,74,77,72});
    student7.printReport();
    Student student8 = Student("John",std::vector<int> {70,69,73,73,72,71,70,68});
    student8.printReport();

    //D's
    Student student9 = Student("Mickey",std::vector<int> {68,67,69,68,67,69,70,70,69,68,67,67,90});
    student9.printReport();
    Student student10 = Student("Lauren",std::vector<int> {60,68,65,66,61,64,68,10,90});
    student10.printReport();

    //F's
    Student student11 = Student("Ashley",std::vector<int> {1,-5,50,30,60,25,90});
    student11.printReport();

    student7.printReport();

    //= operator
    student11 = student7;
    student11.printReport();
    student11 = student11;
    student11.printReport();

    //empty vector student
    Student student12 = Student("Blank",std::vector<int> {});
    student12.printReport();
    student12.getMarks();
    //sets the empty vector to a vector with elements
    student12.setMarks(std::vector<int> {60,68,65,66,61,64,68,10,90});
    //changes the name
    student12.setName("Setter guy");
    student12.printReport();

    //copys student9 to student13
    Student student13 = Student(student9);
    student13.printReport();
    student9.printReport();

    //getsIdCount up to this point
    student13.getIdCount();

    student13 = student7;
    student13.printReport();
    student13 = student13;
    student13.printReport();

    return 0;
}

