#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(double money) : BasicAccount(money) {}

double SavingsAccount::interestEarned() {
    cout << "[Transaction Successed!] Interest Earned!" << endl;
    setBalance(getBalance() * (1.0 + interestRate));
    return getBalance();
}