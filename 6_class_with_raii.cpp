/**
 * 6. class with RAII
 *      Create a Rectangle class with private width and height. Use constructors/destructors and a method area().
 */

#include <iostream>

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int in_width, int in_height) : width(in_width), height(in_height)
    {
    }

    ~Rectangle(void)
    {
        std::cout << "In destructor function" << std::endl;
    }

    int area(void)
    {
        return this->width * this->height;
    }
};

int main(void)
{
    Rectangle rec(10, 20);

    std::cout << "The area of rec is " << rec.area() << std::endl;

    return 0;
}
