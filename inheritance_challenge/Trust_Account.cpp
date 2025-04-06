#include "Trust_Account.h"

int Trust_Account::withdrawal_time = 0;

Trust_Account::Trust_Account(std::string in_name, double balance, double interest_rate)
    : Savings_Account{in_name, balance, interest_rate}
{
}

Trust_Account::~Trust_Account(void)
{
}

bool Trust_Account::deposit(double amount)
{
    if (amount > BONUS_POINT)
    {
        amount += 50;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
    if (amount > 0.2 * Savings_Account::get_balance())
    {
        return false;
    }

    if (withdrawal_time >= 3)
    {
        return false;
    }
    withdrawal_time++;

    return Savings_Account::withdraw(amount);
}