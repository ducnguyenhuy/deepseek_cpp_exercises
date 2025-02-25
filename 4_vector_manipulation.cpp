/**
 * 4. vector manipulation
 *      Use std::vector to store 10 integers. Sort them with std::sort and reverse them with std::reverse
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    std::vector<int> vec = {1, 3, 4, 2, 5};
    std::cout << "Arr" << std::endl;
    for (int val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::sort(vec.begin(), vec.end());
    std::cout << "Arr after sort" << std::endl;
    for (int val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::reverse(vec.begin(), vec.end());
    std::cout << "Arr after reverse" << std::endl;
    for (int val : vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}