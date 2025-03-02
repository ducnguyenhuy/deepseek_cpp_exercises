/**
 * 8. template function
 *      Write a generic swap(T& a, T& b) function that swaps two values of any type.
 */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

int main(void)
{
    int a = 10, b = 20;
    float c = 10.10, d = 20.20;

    std::cout << "Value before swap: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;

    swap(a, b);
    swap(c, d);

    std::cout << "Value after swap: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;

    return 0;
}