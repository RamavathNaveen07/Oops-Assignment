#include <iostream>
using namespace std;
 
class Complex{
    float real, imag;
 
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
 
    
    Complex operator+(const Complex &c) const{
        return Complex(real + c.real, imag + c.imag);
    }
 
    Complex operator-(const Complex &c) const{
        return Complex(real - c.real, imag - c.imag);
    }
 
    
    Complex &operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    bool operator==(const Complex &c) const{
        return (real == c.real && imag == c.imag);
    }
 
    friend ostream &operator<<(ostream &os, const Complex &c){
        os << c.real;

        if (c.imag >= 0) os << "+";
        os << c.imag << "i";
        return os;
    }
};
 
int main()
{
    Complex a(5, 3), b(2, 7);
 
    cout << "a     = " << a         << endl;
    cout << "b     = " << b         << endl;
    cout << "a + b = " << (a + b)   << endl;
    cout << "a - b = " << (a - b)   << endl;
 
    ++a;
    cout << "++a   = " << a         << endl;
    cout << "a==b  : " << (a == b ? "true" : "false") << endl;
 
    return 0;
}
 
