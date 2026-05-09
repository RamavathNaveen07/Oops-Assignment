#include <iostream>
#include <cmath>
using namespace std;
 
float area(float r){
    return 3.14159f * r * r;
}
 
float area(float l, float b){
    return l * b;
}
 
float area(float a, float b, float c){
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
 
int sum(int a, int b){
    return a + b;
}
 
float sum(float a, float b){
    return a + b;
}
 
int sum(int a, int b, int c){
    return a + b + c;
}
 
float volume(float s){
    return s * s * s;
}
 
float volume(float r, float h){
    return 3.14159f * r * r * h;
}
 
int main(){

    cout << "Area of circle (r=7)         : " << area(7.0f)         << endl;
    cout << "Area of rectangle (5x8)      : " << area(5.0f, 8.0f)   << endl;
    cout << "Area of triangle (5,12,13)   : " << area(5, 12, 13)    << endl;
    cout << "Sum (6+9)                    : " << sum(6, 9)           << endl;
    cout << "Sum (3.5+4.5)               : " << sum(3.5f, 4.5f)     << endl;
    cout << "Sum (2+3+4)                  : " << sum(2, 3, 4)        << endl;
    cout << "Volume of cube (s=4)         : " << volume(4.0f)        << endl;
    cout << "Volume of cylinder (r=3,h=7) : " << volume(3.0f, 7.0f) << endl;
    return 0;
}
 
