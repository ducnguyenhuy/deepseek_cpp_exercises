/**
 * 3. Prime checker
 *      Write a function bool is_prime(int n) that checks if a numer is prime. Using range-based loops to test multiple values.
 */

#include <iostream>

bool is_prime(int n)
{
    if ((1 == n) || (2 == n))
    {
        return true;
    }

    int half_of_n = (int)(n / 2);
    for (int i = 2; i <= half_of_n; i++)
    {
        if (!(n % i))
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (auto val : arr)
    {
        if (is_prime(val))
        {
            std::cout << val << " is a prime" << std::endl;
        }
        else
        {

            std::cout << val << " is not a prime" << std::endl;
        }
    }

    return 0;
}