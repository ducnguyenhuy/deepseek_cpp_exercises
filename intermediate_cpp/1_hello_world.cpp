/**
 * 1. hello world with modern I/O
 *      Write a program that prints 'Hello, {name}' using std::cin and std::cout (avoid using namespace std;)
 */

#include <iostream>
#include <string>

int main(void)
{
    std::string your_name;
    std::cout << "Enter your name: " << std::endl;
    std::cin >> your_name;

    std::cout << "Hello, " << your_name << std::endl;
    return 0;
}