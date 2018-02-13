#include <array>

#include "ExamReport.h"
using namespace std;

int main() {
    const array<int, ExamReport::studentNum> marks = { 85,63,92,100,73,78,85,66,76,45}; 
    string moduleName = "ECS769P Advanced Object-Oriented Programming";
    ExamReport myExamReport(moduleName, marks); 
    myExamReport.displayMessage(); 
    myExamReport.processMarks();
    return 0;
}
