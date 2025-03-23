/**
 * 10. Exception handling
 *      Write a divide(float a, float b) function that throws std::invalid_argument if b is zero.
 */

#include <iostream>
#include <exception>

float divide(float a, float b)
{
    if (0 == b)
    {
        throw std::invalid_argument("The dividend is equal 0");
    }

    return a / b;
}

int main(void)
{
    float a, b, result;
    try
    {
        result = divide(1, 0);
        std::cout << "The result is " << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}