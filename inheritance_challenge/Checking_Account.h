#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include <iostream>

#include <string>

#include "Account.h"

#define CHECKING_ACCOUNT_NAME "default_checking_acc_name"
#define CHECKING_ACCOUNT_BALANCE 0
#define CHECKING_ACCOUNT_FEE 1.5

class Checking_Account : public Account
{
private:
    std::string name;
    double balance;
    static constexpr double fee = 1.5;

public:
    Checking_Account(std::string in_name, double in_balance);
    ~Checking_Account(void);

    int withdrawal(double amount);
};

#endif