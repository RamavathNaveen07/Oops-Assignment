// #include<iostream>
// using namespace std;

// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B {
// public:
//     void showB() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A, public B {
// public:
//     void showC() {
//         cout << "Class C" << endl;
//     }
// };

// int main() {
//     C obj;
//     obj.showA();  // from A
//     obj.showB();  // from B
//     obj.showC();  // own
//     return 0;
// }

             // hierarchical Inheritance.....
           
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void meow() {
//         cout << "Cat meows" << endl;
//     }
// };

// class Cow : public Animal{
//     public:
//     void sleep(){
//         cout <<"Cow sleeps";
//     }
// };

// int main() {
//     Dog d;
//     d.eat();   // inherited
//     d.bark();  // own

//     Cat c;
//     c.eat();   // inherited
//     c.meow();  // own

//     Cow w;
//     w.eat();
//     w.sleep();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// public:
//     void showB() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A {
// public:
//     void showC() {
//         cout << "Class C" << endl;
//     }
// };

// class D : public B, public C {
// public:
//     void showD() {
//         cout << "Class D" << endl;
//     }
// };

// int main() {
//     D obj;
//     obj.B::showA();  // using scope to avoid ambiguity
//     obj.showB();
//     obj.showC();
//     obj.showD();
//     return 0;
// }

#include<iostream>
using namespace std;

class Number {
public:
    int x;

    Number(int a) {
        x = a;
    }

    // Overloading + operator
    Number operator + (Number n) {
        return Number(x + n.x);
    }

    void show() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Number n1(500), n2(26540);
    Number n3 = n1 + n2;  // calls operator+
    n3.show();
    return 0;
}