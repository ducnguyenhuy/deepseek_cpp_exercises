/**
 * 2. temperature converter
 *      Create a function that convers Celsius to Fahreheit using constexpr for compile-time calculations.
 */

#include <iostream>

constexpr int cel_to_fah(int cel)
{
    return (cel * 9 / 5) + 32;
}

int main(void)
{
    int cel_degree = 25;
    std::cout << "Fahreheit: " << cel_to_fah(cel_degree) << std::endl;

    return 0;
}