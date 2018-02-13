#include "BasicAccount.h"

class SavingsAccount : public BasicAccount {
public:
    SavingsAccount(double = 0.0);
    double interestEarned();
    
private:
    const double interestRate = 0.005;
};