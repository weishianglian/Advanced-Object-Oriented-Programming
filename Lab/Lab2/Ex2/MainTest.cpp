#include <iostream>
#include "CurrentAccount.h"
#include "SavingsAccount.h"
using namespace std;

int main() {
    BasicAccount basic(800);
    cout << "Basic Account Information: " << endl;
    basic.showBalance();
    basic.withdraw(500);
    basic.showBalance();
    basic.deposit(1500);
    basic.showBalance();

    CurrentAccount current(500);
    cout << endl << "Current Account Information: " << endl;
    current.showBalance();
    current.withdraw(600);
    current.showBalance();
    current.withdraw(1000);
    current.showBalance();
    current.deposit(1500);
    current.showBalance();

    SavingsAccount savings(500);
    cout << endl << "Savings Account Information: " << endl;
    savings.showBalance();
    savings.withdraw(600);
    savings.showBalance();
    savings.withdraw(1000);
    savings.showBalance();
    savings.deposit(1500);
    savings.showBalance();
    savings.interestEarned();
    savings.showBalance();
    return 0;
};