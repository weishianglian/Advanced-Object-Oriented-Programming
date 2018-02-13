#include "CurrentAccount.h"

using namespace std;

CurrentAccount::CurrentAccount(double money) : BasicAccount(money) {}

double CurrentAccount::withdraw(double money) {
    double withdraw = 0;
    double balance = getBalance();
    if (money > balance + overdraft) {
        cout << "[Transaction Failed!] " << "Your account balance add overdraft is lower than what you want!" << endl;
    } else {
        withdraw = money;
        balance -= money;
        setBalance(balance);
        cout << "[Transaction Successed!] " << "Withdraw £" << withdraw << endl;
    }
    return withdraw;
}