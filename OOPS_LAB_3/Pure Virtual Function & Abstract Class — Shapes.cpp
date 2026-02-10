/*
Aim:
To demonstrate pure virtual functions and abstract classes using different shapes.

Algorithm:
1. Create abstract base class Shape with pure virtual area().
2. Create derived classes Circle, Rectangle, and Triangle.
3. Override area() in each derived class.
4. Use base class pointer to calculate area of each shape.
5. Display results.
6. Stop program.

Output:
Circle area: 28.2743
Rectangle area: 20
Triangle area: 9
*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;  
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double area() const override {
        return M_PI * r * r;
    }
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double area() const override {
        return w * h;
    }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* s1 = new Circle(3.0);
    Shape* s2 = new Rectangle(4.0, 5.0);
    Shape* s3 = new Triangle(6.0, 3.0);

    cout << "Circle area: " << s1->area() << endl;
    cout << "Rectangle area: " << s2->area() << endl;
    cout << "Triangle area: " << s3->area() << endl;

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
