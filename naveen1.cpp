#include<iostream>
using namespace std;
class room{
public:
    string name;
    int age,roll_number;
    string grade ;

};

int main(){
room S1; 
S1.name ="naveen";
S1.age =20;
S1.roll_number = 241486;
S1.grade = "A+";
cout<< S1.name << " ";
room S2;
S2.name =" kavya";
S2.age =19;
S2.grade="A";
cout<< S2.name << S2.age << " ";

return 0;
}


