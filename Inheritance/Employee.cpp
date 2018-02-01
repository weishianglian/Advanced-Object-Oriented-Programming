#include <iostream>
#include <stdexcept>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first, const string &last, const string &id, double sales, double rate) :
    firstName(first), lastName(last), employeeId(id) {
        setGrossSales(sales);
        setCommissionRate(rate);
    }

    void Employee::setFirstName(const string &first) {
        firstName = first;
    }
    void Employee::setLastName(const string &last) {
        lastName = last;
    }
    void Employee::setEmployeeId(const string &id) {
        employeeId = id;
    }
    void Employee::setGrossSales(double sales) {
        if (sales >= 0.0) {
            grossSales = sales;
        } else {
            throw invalid_argument("Gross sales must be greater than zero.");
        }
    }
    void Employee::setCommissionRate(double rate) {
        if (rate > 0.0 && rate < 1.0) {
            commissionRate = rate;
        } else {
            throw invalid_argument("Gross sales must be between zero and one.");
        }
    }
    string Employee::getFirstName() const {
        return firstName;
    }
    string Employee::getLastName() const {
        return lastName;
    }
    string Employee::getEmployeeId() const {
        return employeeId;
    }
    double Employee::getGrossSales() const {
        return grossSales;
    }
    double Employee::getCommissionRate() const {
        return commissionRate;
    }
    double Employee::earnings() const {
        return getGrossSales() * getCommissionRate();
    }
    void Employee::print() const {
        cout << "Employee: " << getFirstName() << ' ' << getLastName() << endl
            << "Employee ID: " << getEmployeeId() << endl
            << "Gross Sales: " << getGrossSales() << endl
            << "Commission Rate: " << getCommissionRate() << endl;
    }
