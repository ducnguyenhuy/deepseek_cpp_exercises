/**
 * 9. smart pointers 
 *      Create a class ResourceOwner that manages a dynamically allocated array using std::unique_ptr.
 */

#include <iostream>
#include <memory>

int main(void)
{
    std::unique_ptr<int> uptr = std::make_unique<int>(123);

    std::cout << "The value is " << *uptr.get() << std::endl;

    return 0;
}