#include <iostream>
using namespace std;      // ---->>> operater overloading

// class Complex {
// public:
//     int real, imag;

//     Complex(int r, int i) {
//         real = r;
//         imag = i;
//     }

//     Complex operator + (Complex obj) {
//         return Complex(real + obj.real, imag + obj.imag);
//     }

//     void display() {
//         cout << real << " + " << imag << "i";
//     }
// };

// int main() {
//     Complex c1(2, 3), c2(4, 5);
//     Complex c3 = c1 + c2;

//     c3.display();   // Output: 6 + 8i
// }



// class Distance {
//     public:
//     int meter;
//     Distance(int m){
//         meter = m;
//     }
//     Distance operator - (Distance d){
//         return Distance (meter - d.meter);
//     }
//     void display (){
//         cout << "Distance :"<<meter<<" meters" << endl;
//     }
// };
//    int main(){
//         Distance d1(500),d2(350);
//         Distance d3 = d1 - d2;
//         d3.display();  //Distance : 150 meters

//     return 0;
// }



           //--------->>function overloading
class Naveen {
    public:
    int sum (int a,int b){
        return a+b;
    }
    double sum (double a, double b){
        return a+b;
    }
    int sum (int a, int b, int c){
        return a+b+c;
    }
};

    int main (){
        Naveen obj;

        cout << obj.sum(10, 15) <<endl;
        cout << obj.sum(15.33, 20.77)<<endl;
        cout << obj.sum(10 , 13, 9)<<endl;

        return 0;
        
        
    }