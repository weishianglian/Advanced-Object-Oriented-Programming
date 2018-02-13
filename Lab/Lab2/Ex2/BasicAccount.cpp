#include "BasicAccount.h"

using namespace std;

BasicAccount::BasicAccount(double money) {
    setBalance(money);
}

double BasicAccount::getBalance() const {
    return balance;
}

void BasicAccount::setBalance(double money) {
    balance = money;
}

void BasicAccount::showBalance() const {
    cout << "\tBalance: £" << getBalance() << endl;
}

double BasicAccount::withdraw(double money) {
    double withdraw = 0;
    if (money > balance) {
        cout << "[Transaction Failed!] " << "Your account balance is lower than what you want!" << endl;
    } else {
        withdraw = money;
        balance -= money;
        cout << "[Transaction Successed!] " << "Withdraw £" << withdraw << endl;
    }
    return withdraw;
}

void BasicAccount::deposit(double money) {
    double deposit = 0;
    if (money < 0.0) {
        cout << "[Transaction Failed!] " << "Deposit must greater equal than zero!" << endl;
    } else {
        deposit = money;
        balance += money;
        cout << "[Transaction Successed!] " << "Deposit £" << deposit << endl;
    }
}