#include <iostream>
using namespace std;
 
class Shape{

public:
    virtual void   draw() = 0;
    virtual double area() = 0;
    virtual ~Shape() {}
};
 
class Rectangle : public Shape{
    double l, w;
 
public:
    Rectangle(double a, double b) : l(a), w(b) {}
 
    void draw() override{
        cout << "Rectangle drawn." << endl;
    }
 
    double area() override{
        return l * w;
    }
};
 
class Circle : public Shape{
    double r;
 
public:
    Circle(double radius) : r(radius) {}
 
    void draw() override{

        cout << "Circle drawn." << endl;
    }
 
    double area() override{
        return 3.14159 * r * r;
    }
};
 
class Triangle : public Shape{

    double base, height;
 
public:
    Triangle(double b, double h) : base(b), height(h) {}
 
    void draw() override {
        cout << "Triangle drawn." << endl;
    }
 
    double area() override{
        return 0.5 * base * height;
    }
};
 
int main(){
    Shape *shapes[] = { new Rectangle(6, 9), new Circle(4), new Triangle(10, 6) };
 
    for (Shape *s : shapes){

        s->draw();

        cout << "Area = " << s->area() << endl;
        delete s;
    }
 
    return 0;
}
 
