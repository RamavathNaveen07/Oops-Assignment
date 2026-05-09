#include <iostream>
using namespace std;
 
class Counter{
    static int count;
    int id;
 
public:
    Counter(){
        ++count;
        id = count;
    }
 
    static int getCount(){
        return count;
    }
 
    int getId(){
        return id;
    }
};
 
int Counter::count = 0;
 
int main(){
    cout << "Initial count: " << Counter::getCount() << endl;
 
    Counter c1, c2, c3, c4, c5;
 
    cout << "After creating 5 objects: " << Counter::getCount() << endl;
 
    cout << "c1 id = " << c1.getId() << endl;
    cout << "c2 id = " << c2.getId() << endl;
    cout << "c3 id = " << c3.getId() << endl;
    cout << "c4 id = " << c4.getId() << endl;
    cout << "c5 id = " << c5.getId() << endl;
 
    return 0;
}
