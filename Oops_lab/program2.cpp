#include <iostream>
using namespace std;
 
float simpleInterest(float principal, float rate = 7.0, float time = 2){

    return (principal * rate * time) / 100;
}
 
int main(){

    float p;
    cout << "Enter principal amount: ";
    cin  >> p;
 
    cout << "SI (default rate=7%, time=2yr) : " << simpleInterest(p)       << endl;
    cout << "SI (rate=10%, time=3yrs)       : " << simpleInterest(p, 10, 3)<< endl;
    cout << "SI (rate=12%, time=2yrs)       : " << simpleInterest(p, 12)   << endl;
 
    return 0;
}
 
