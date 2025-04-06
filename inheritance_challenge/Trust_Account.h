#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

/**
 * Requirement for Trust Account
 *
 * Add a Trust account class to the Account hierarchy
 *  A Trust account has a name, a balance, and an interest rate
 *  The Trust account deposit works just like a savings account deposit.
 *
 *  However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
 *  The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be
 *  less than 20% of the account balance.
 *  You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
 */

#include <iostream>
#include <string>

#include "Account.h"
#include "Savings_Account.h"

#define BONUS_POINT 5000
#define BONUS_MONEY 50
#define MAX_TIME_WITHDRAWAL 3

class Trust_Account : public Savings_Account
{
private:
    static int withdrawal_time;
    static constexpr const char *def_name = "Trust Account";
    static constexpr const double def_balance = 0.0;
    static constexpr const double int_rate = 0.0;

public:
    Trust_Account(std::string in_name = def_name, double balance = def_balance, double interest_rate = int_rate);
    ~Trust_Account(void);
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // TRUST_ACCOUNT_H