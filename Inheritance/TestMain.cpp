#include <iostream>
#include <iomanip>
#include "SeniorEmployee.h"
using namespace std;

int main() {
    SeniorEmployee se("John", "Smith", "0001210", 50000, .04, 3000);
    cout << fixed << setprecision(2);
    cout << "Employee information: (calling individual functions)" << endl << endl
        << "First name: " << se.getFirstName() << endl << "Last name: " << se.getLastName() << endl 
        << "Employee ID: "<< se.getEmployeeId() << endl << "Gross sales: " << se.getGrossSales() << endl 
        << "Commission rate: " << se.getCommissionRate() << endl << "Base salary: " << se.getBaseSalary() << endl;
    se.setBaseSalary(1000); 
    cout << endl << "Updated employee information: (calling print function)" << endl << endl;
    se.print();
    cout << endl << endl << "Earnings: £" << se.earnings() << endl;

    cout << endl;
    Employee employee("Sue", "Jones", "0104357", 10000, .06);
    SeniorEmployee seniorEmployee("John", "Smith", "0001210", 5000, .04, 300);
    cout << fixed << setprecision(2); // set floating-point output formatting
    /* output objects employee and seniorEmployee */ 
    employee.print(); // invokes base-class print
    cout << "\n\n";
    seniorEmployee.print(); // invokes derived-class print

    cout << endl;
    Employee *employeePtr = nullptr; // base-class pointer
    SeniorEmployee *seniorEmployeePtr = nullptr; // derived-class pointer
    /* aim base-class pointer at base-class object and print*/ 
    employeePtr = &employee; // natural
    employeePtr->print(); // invokes base-class print
    /* aim derived-class pointer at derived-class object and print*/ 
    seniorEmployeePtr = &seniorEmployee; // natural
    seniorEmployeePtr->print(); // invokes derived-class print
    return 0;
};