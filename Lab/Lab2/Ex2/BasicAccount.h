#ifndef BASCIACCOUNT_H_
#define BASCIACCOUNT_H_

#include <iostream>

class BasicAccount {
public:
    BasicAccount(double = 0.0);
    double getBalance() const;
    void setBalance(double);
    void showBalance() const;
    double withdraw(double);
    void deposit(double);
    
private:
    double balance;
};

#endif