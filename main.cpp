#include "Student.h"
int main() {
    Student student1 = Student("Mike",std::vector<int> { 100,90,-10,120 });
    student1.printReport();
    Student student2 = Student("Steve",std::vector<int> {20,50,85,90,73,95,95,99,99,99});
    student2.printReport();
    Student student3 = Student("Austin",std::vector<int> {20,50,85,90,7});
    student3.printReport();
    student1.printReport();
    return 0;
}

