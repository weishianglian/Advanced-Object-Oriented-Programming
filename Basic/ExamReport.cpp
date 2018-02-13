#include <iostream>
#include <iomanip>

#include "ExamReport.h"

using namespace std;

ExamReport::ExamReport(const string &name, const array<int, studentNum> &marksArray) :
moduleName(name), marks(marksArray) {}

void ExamReport::setModuleName(const string &name) {
    moduleName = name;
}

string ExamReport::getModuleName() const {
    return moduleName;
}

void ExamReport::displayMessage() const {
    cout << "Exam Report For \n" << getModuleName() << "!" << endl;
}

void ExamReport::processMarks() const {
    outputMarks();
    cout << setprecision(2) << fixed << endl;
    cout << "Class Average is " << getAverage() << endl;
    cout << "The Lowest mark is " << getMinimum() << endl;
    cout << "The Highest mark is " << getMaximum() << endl;
    outputBarChart();
}

int ExamReport::getMinimum() const {
    int lowest = 100;
    for (int mark : marks) {
        if (mark < lowest) 
            lowest = mark;
    }
    return lowest;
}

int ExamReport::getMaximum() const {
    int highest = 0;
    for (int mark : marks) {
        if (mark > highest)
            highest = mark;
    }
    return highest;
}

double ExamReport::getAverage() const {
    int total = 0;
    for (int mark : marks) {
        total += mark;
    }
    return static_cast<double>(total) / marks.size();
}

void ExamReport::outputBarChart() const {
    cout << endl << "Mark Distribution: " << endl;
    const size_t frequencySize = 11;
    array<unsigned int, frequencySize> frequency = {};

    for (int mark : marks) 
        ++frequency[mark / 10];

    for (size_t count = 0; count < frequency.size(); count++) {
        if (count == 0) {
            cout << "  0-9: ";
        } else if (count == 10) {
            cout << "  100: ";
        } else {
            cout << count * 10 << "-" << count * 10 + 9 << ": ";
        }
        for (unsigned int stars = 0; stars < frequency[count]; stars++)
            cout << "*";
        cout << endl;
    }

}

void ExamReport::outputMarks() const {
    cout << endl << "The Marks are " << endl << endl;
    for (size_t student = 0; student < marks.size(); student++)
        cout << "Student " << setw(2) << student+1 << ": " << setw(3) << marks[student] << endl;
}

