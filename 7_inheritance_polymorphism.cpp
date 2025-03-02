/**
 * 7. Inheritance and polymorphism
 *      Define a base Shape class with virtual double area() = 0. Derive Circle and Square classes.
 */

#include <iostream>

#define PI 3.14

class Shape
{
public:
    virtual double area(void) const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double input_radius) : radius(input_radius)
    {
    }

    double area(void) const override
    {
        return radius * PI;
    }
};

class Square : public Shape
{
private:
    int one_side;

public:
    Square(int input_side) : one_side{input_side}
    {
    }

    double area(void) const override
    {
        return one_side * one_side;
    }
};

int main(void)
{
    Shape *sq = new Square(4);
    std::cout << "The area of square " << sq->area() << std::endl;
    
    Shape *cir = new Circle(4);
    std::cout << "The area of square " << cir->area() << std::endl;
    
    delete sq;
    delete cir;

    return 0;
}
