#include <iostream>
using namespace std;
 
class Animal
{
public:
    void breathe()
    {
        cout << "Animal breathes." << endl;
    }
};
 
class Bird : public Animal{

public:
    void chirp(){
        cout << "Bird chirps." << endl;
    }
};
 
class Swimmer{
public:
    void swim(){
        cout << "Can swim." << endl;
    }
};
 
class Duck : public Bird, public Swimmer{};

 
class Duckling : public Duck{
public:
    void quack(){
        cout << "Duckling quacks." << endl;
    }
};
 
class Fish : public Animal{
public:
    void blowBubbles(){
        cout << "Fish blows bubbles." << endl;
    }
};
 
class A{
public:
    void showA(){
        cout << "Class A (virtual base)" << endl;
    }
};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
 
int main(){
    cout << "--- Single Inheritance ---" << endl;
    Bird bird;
    bird.breathe();
    bird.chirp();
 
    cout << "--- Multiple Inheritance ---" << endl;
    Duck dk;
    dk.breathe();
    dk.chirp();
    dk.swim();
 
    cout << "--- Multilevel Inheritance ---" << endl;
    Duckling dl;
    dl.breathe();
    dl.chirp();
    dl.swim();
    dl.quack();
 
    cout << "--- Hierarchical Inheritance ---" << endl;
    Fish fish;
    fish.breathe();
    fish.blowBubbles();
 
    cout << "--- Hybrid Inheritance ---" << endl;
    D obj;
    obj.showA();
 
    return 0;
}
