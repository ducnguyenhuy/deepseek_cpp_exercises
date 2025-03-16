/**
 * 11. lambda and algorithms
 *      Use std::for_each with a lambda to print even numbers form a std::vector<int>.
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6};

    std::for_each(vec.begin(), vec.end(), [](int n)
                  {
        if(!(n%2)) {
            std::cout << n << std::endl;
        } });
}