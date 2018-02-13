#include "BasicAccount.h"

class CurrentAccount : public BasicAccount {
public:
    CurrentAccount(double = 0.0);
    double withdraw(double);
private:
    const double overdraft = 100;
};