#include <iostream>
#include <stdexcept>
#include "SeniorEmployee.h"
using namespace std;

SeniorEmployee::SeniorEmployee(const string &first, const string &last, const string &id, double sales, double rate, double salary) : 
    Employee(first, last, id, sales, rate) {
        setBaseSalary(salary);
}

void SeniorEmployee::setBaseSalary(double salary) {
    if (salary >= 0.0) {
        baseSalary = salary;
    } else {
        throw invalid_argument("Salary must be greater than zero.");
    }
}

double SeniorEmployee::getBaseSalary() const {
    return baseSalary;
}

double SeniorEmployee::earnings() const {
    return getBaseSalary() + Employee::earnings();
}

void SeniorEmployee::print() const {
    cout << "Senior";
    Employee::print();
    cout << endl << "Base Salary: " << getBaseSalary();
}