#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include <string>

#include "Account.h"
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string in_name, double in_balance)
    : name(in_name), balance(in_balance)
{
}

Checking_Account::~Checking_Account(void)
{
}

int Checking_Account::withdrawal(double amount)
{
    if(balance - amount - fee < 0)
    {
        return -1;
    }

    balance -= amount - fee;
    return 0;
}


#endif