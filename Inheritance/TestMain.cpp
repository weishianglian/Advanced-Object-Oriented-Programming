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
    return 0;
}