#ifndef SENIOREMPLOYEE_H_
#define SENIOREMPLOYEE_H_

#include <string>
#include "Employee.h"

class SeniorEmployee: public Employee {
public:
    SeniorEmployee(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0);

    void setBaseSalary(double);
    double getBaseSalary() const;

    double earnings() const;
    void print() const;

private:
    double baseSalary;
    
};

#endif