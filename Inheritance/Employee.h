#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
public:
    Employee(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);
    void setFirstName(const std::string &);
    void setLastName(const std::string &);
    void setEmployeeId(const std::string &);
    void setGrossSales(double);
    void setCommissionRate(double);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmployeeId() const;
    double getGrossSales() const;
    double getCommissionRate() const;
    double earnings() const;
    void print() const;

private:
    std::string firstName;
    std::string lastName;
    std::string employeeId;
    double grossSales;
    double commissionRate;
};

#endif
