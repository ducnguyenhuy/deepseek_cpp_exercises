/**
 * 1. Shapes with RAII, smart pointers, inheritance and polymorphism
 *      Implement a Shape base class with a pure virtual area() method.
 *      Derive Rectangle and Circle from Shape
 *      The Rectangle class should manage width and height using RAII
 *      The Shape objects should be stored and managed using std::unique_ptr
 */

#include <iostream>
#include <memory>

#define PI 3.14

class Shape
{
public:
    virtual double area(void) = 0;
    virtual ~Shape() {}             // add a virtual destructor
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double in_width, double in_height) : width(in_width), height(in_height) {}
    ~Rectangle() {}

    double area(void) override
    {
        return width * height;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double in_radius) : radius(in_radius) {}
    ~Circle(void) {}

    double area(void) override
    {
        return radius * radius * PI;
    }
};

int main(void)
{
    std::unique_ptr<Shape> shape_obj = std::make_unique<Circle>(12.5);

    std::cout << "The area: " << shape_obj->area() << std::endl;

    return 0;
}