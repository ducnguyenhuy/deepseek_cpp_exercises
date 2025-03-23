/**
 * 12. move semantics
 *      Implement a string class with move constructor/assignment (ex: logging when moves occur).
 */

#include <iostream>
#include <cstring>

class my_string
{
private:
    char *str;

public:
    my_string(char *initialize_str) : str(initialize_str) {}
    ~my_string(void)
    {
        free(str);
    }
    my_string(my_string &&other) noexcept : str(other.str)
    {
        other.str = nullptr;
        std::cout << "Move constructor" << std::endl;
    }

    my_string(my_string &other) noexcept
    {
        delete[] str;
        str = strdup(other.str);
    }
};