#include <iostream>
using namespace std;
 
class Shape{
public:
    virtual void draw(){
        cout << "Drawing generic shape." << endl;
    }
 
    virtual double area(){
        return 0;
    }
};
 
class Circle : public Shape{
    double radius;
 
public:
    Circle(double r) : radius(r) {}
 
    void draw() override{
        cout << "Drawing Circle." << endl;
    }
 
    double area() override {
        return 3.14159 * radius * radius;
    }
};
 
class Triangle : public Shape{
    double base, height;
 
public:
    Triangle(double b, double h) : base(b), height(h) {}
 
    void draw() override{
        cout << "Drawing Triangle." << endl;
    }
 
    double area() override {
        return 0.5 * base * height;
    }
};
 
void renderShape(Shape *s){

    s->draw();

    cout << "Area = " << s->area() << endl;
}
 
int main(){

    Shape *s1 = new Circle(6);
    Shape *s2 = new Triangle(8, 5);
 
    renderShape(s1);
    renderShape(s2);
 
    delete s1;
    delete s2;
    return 0;
}
