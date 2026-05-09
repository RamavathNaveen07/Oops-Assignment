#include <iostream>
#include <string>
using namespace std;
 
class Engine {
    int    horsepower;
    string fuelType;
 
public:
    Engine(int hp, string fuel) : horsepower(hp), fuelType(fuel) {}
 
    void start(){
        cout << "Engine started." << endl;
        cout << "HP   : " << horsepower << endl;
        cout << "Fuel : " << fuelType   << endl;
    }
 
    void stop(){
        cout << "Engine stopped." << endl;
    }
 
    int getHP(){
        return horsepower;
    }
};
 
class Car{
    string model;
    Engine engine;   // containership
 
public:
    Car(string m, int hp, string fuel) : model(m), engine(hp, fuel) {}
 
    void drive(){
        cout << "Car Model : " << model << endl;
        engine.start();
        cout << "Cruising at " << engine.getHP() << " HP." << endl;
    }
 
    void park(){

        engine.stop();
        cout << "Car parked safely." << endl;
    }
};
 
int main(){

    Car myCar("Maruti Swift", 90, "Petrol");
    myCar.drive();
    myCar.park();
 
    return 0;
}
