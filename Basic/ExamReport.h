#ifndef EXAMREPORT_H_
#define EXAMREPORT_H_

#include <string>
#include <array>

class ExamReport {
public:
    static const size_t studentNum = 10;

    ExamReport(const std::string &, const std::array<int, studentNum> &);

    void setModuleName(const std::string &);
    std::string getModuleName() const;
    void displayMessage() const;
    void processMarks() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage() const;
    void outputBarChart() const;
    void outputMarks() const;

private:
    std::string moduleName;
    std::array<int, studentNum> marks;
};

# endif // EXAMREPORT_H_