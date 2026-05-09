#include<iostream>
using namespace std;

// struct student {
//     string name ;
//     int age;
// };
// class studentclass{
//     string name;
//     int age;

// public:
//     void setData(string n, int a){
//         name = n;
//         age = a;
//     }
//     void display() {
//         cout << "Name :"<<name<<" ,Age :"<<age << endl;

//     }

// };
// int main (){
//     student S1;
//     S1.name = "naveen";
//     S1.age = 20;
//     cout << " Struct -> Name :"<< S1.name <<",Age :"<<S1.age << endl;

//     studentclass Sc1;
//     Sc1.setData("Naveen",20) ;
//     Sc1.display();
   

// return 0;

// }

    // problem 2.

//  class book{
//     private:
//         string title;
//         string author;
//         float price;
//     public:
//         void setData(string t, string a, float r){
//             author = a;
//             title = t;
//             price = r;
//         }
//         void display (){
//             cout << "Athor :" <<author << endl;
//             cout << "Title :"<< title << endl;
//             cout <<"Price :"<<price <<endl;

//         }
        
// };

// int main (){
//     book B1;
//     B1.setData("Naveen","how to be a Genious",500);
//     B1.display();

//     return 0;
// }  

      // problem 3. 
    
// class Rectangle{
//     float length;
//     float breadth;

// public:
//     void setDimentions(float l, float b){
//         length = l;
//         breadth = b;
//     }
//     float area();
//     float perimeter();
//     void display();
// };  

//     float Rectangle::area(){
//         return length*breadth;
//     }
//     float Rectangle::perimeter(){
//         return 2*(length + breadth);
//     }

//     void Rectangle::display (){

//         cout << "Length :" << length <<endl;
//         cout << "Breadth :"<< breadth << endl;
//          cout << "Area :"<< area()<< endl;
//           cout << "Perimeter :"<< perimeter()<< endl;
//     }


// int main (){
//     Rectangle R1;
//     R1.setDimentions(55,80);
//     R1.display();

//     return 0;

// }

             // 4.1 Arrays with in a class..(// part-B --> 1)

// class marks{
//         int marks [5];

//     public:
//         void setmarks(){
//             cout << "Enter the marks of 5 students :";

//             for (int i=0; i<5; i++){
//                 cout << "Subject " << i+1 << " : ";
//                 cin >> marks[i];
//             }
//         }    
//         float average(){
//             int sum = 0;
//             for(int i=0; i<5; i++){
//                 sum += marks[i];
//             }
//             return (float)sum/5;
//         }
//         void display(){
//             cout << "\n marks :";
//             for (int i=0; i<5; i++){
//                 cout << marks[i] <<" ";
//             }
//             cout << "\nAverage :" << average() << endl;
//         }
                 
// };

// int main (){
//     marks m1;
//     m1.setmarks();
//     m1.display();

//     return 0;

// }

      // problem - 5. part-B --> 2(Arrays of object..)

// class employee{
//         int id;
//         string name;
//         float salary;
    
//     public:
//         void setDetails (int i, string n, float s){
//             id = i;
//             name = n;
//             salary = s;
//         }
        
//         void display(){
//             cout <<"Id :" << id << endl;
//             cout <<"Name :" << name << endl;
//             cout <<"Salary :" << salary << endl;
//             cout <<"------------------"<<endl;

//         }

// };
// int main (){
//     employee Em[3];
//     Em[0].setDetails(101,"Naveen",150000);
//     Em[1].setDetails(102,"sandeep",120000); 
//     Em[2].setDetails(103,"charan",90000);
//     cout << "Employee Details :-"<<endl;
//     cout << "--------------------"<<endl;

//     for (int  i=0; i<3; i++){
//         Em[i].display();
//     }

//     return 0;
// }

    //problem-6. part-B --> 3 (Static Data  member and function ...)

// class counter{
//         int id;
//     public:
//         static int count;

//         counter(){
//             count++;
//             id=count;
//             cout<<"Object "<<id<<"Created "<<endl;
//         }

//         static void showcount(){
//             cout << "Total objects created : " << count << endl;
//         }

//         ~counter( ){
//             cout << "object "<< id << "Distroyed "<<endl;
//             count--; 
//         }
// };

// int counter::count = 0;

// int main(){
//     counter::showcount();

//     counter c1;
//     counter c2;
//     counter c3;

//     counter::showcount();

//     return 0;

// }

     //problem-7..

// class Complex {
//     private:
//         float real;
//         float img;

//     public:
//         void setvalues(float r, float i){
//             real = r;
//             img = i;

//         }
//         void add(Complex c){
//             real = real + c.real;
//             img = img + c.img;
//         }
//         void display(){
//             cout << real << " + " << img << " i " << endl;
//         }
// };
// int main (){

//     Complex c1,c2;
//     c1.setvalues(4.0,5.0); //4 + 5i
//     c2.setvalues(3.0,8.0); //3 + 8i

//     cout << "c1 = "; c1.display();
//     cout << "c2 = "; c2.display();

//     c1.add(c2);

//     cout << "Sum = "; c1.display();

//     return 0;

// }

       //Problem-08(returning Objects)

// class Complex{
//         float real;
//         float image;
//     public:
//         void setvalues(float r, float i){
//             real = r;
//             image = i;
//         }
//         Complex add(Complex c){
//             Complex temp;
//             temp.real = real + c.real;
//             temp.image = image + c.image;
//             return temp;
//         }
//         void display(){
//             cout << real << " + "<< image << " i "<<endl;
            

//         }
// };
// int main (){
//     Complex c1,c2,c3;

//     c1.setvalues(3.0, 4.0);
//     c2.setvalues(5.0, 6.0);

//     cout <<" C1 :";c1.display();
//     cout <<" C2 :";c2.display();

//     c3 = c1.add(c2);

//     cout <<" Sum = ";c3.display();

//     cout <<"After Addition :"<<endl;
//     cout <<" C1 ";c1.display();
//     cout <<" C2 :";c2.display();

//     return 0;

// }


       // Problem - 9(Friend Function)

//  class cylinder;

//  class Box{
//         float length;
//         float breadth;
//         float height;
//      public:
//      void setvalues(float l, float b, float h){
//         length = l;
//         breadth = b;
//         height = h;
//      }   

//      friend void compareVolume(Box b, cylinder c);
//  };

//  class cylinder {
//         float radius ;
//         float height ;
//     public:
//         void setvalues(float r, float h){
//             radius = r;
//             height = h;
//          }
//          friend void compareVolume(Box b, cylinder c);
//  };

//   void compareVolume(Box b, cylinder c){
//             float boxVol = b.length*b.breadth*b.height;
//             float cylVol = 3.14*c.radius*c.radius*c.height;

//             cout << "Box Volume  :" << boxVol << endl;
//             cout << "Cylinder Volume  :" <<cylVol << endl;

//             if(boxVol > cylVol)
//                 cout << "Box has greatest volume " << endl;
//             else if(cylVol > boxVol)
//                 cout <<"Cylender has greater volume " << endl;
//             else
//                 cout << "Both have equal volume " << endl;
//   }         
//   int main(){
//     Box b1;
//     b1.setvalues(3,4,5);

//     cylinder c1;
//     c1.setvalues(3,7);

//     compareVolume(b1,c1);

//     return 0;
//   }

         //Problem-10(Pointer to object..)

// class student{
//         string name;
//         int age;
//     public:
//         void setdetails(string n, int a){
//             name = n;
//             age = a;
//         }
//     void display(){
//         cout << "name  :"<< name <<endl;
//         cout << "Age   :" << age << endl;
//     }
// };
// int main (){
//     student s1;
//     student *ptr;
//     ptr = &s1;


//     ptr->setdetails("Naveen",20);
//     ptr->display();

//     student *ptr2 = new student();
//     ptr2->setdetails("Gandi",17);
//     ptr2->display();
//     delete ptr2;

//     return 0;
// }

         // problem-11(This pointer)

// class student{
//         string name;
//         int age;
//         float marks;
//     public:
//        student& setname(string n){
//             this->name = n;
//             return*this;
//         }
//         student& setage(int a){
//             this->age = a;
//             return*this;
//         }
//         student& setmarks(float m){
//             this->marks = m;
//             return*this;
//         }

//         void display(){
//             cout << "Name :"<<name<<endl;
//             cout << "Age :"<<age<<endl;
//             cout << "Marks:"<<marks<<endl;
//         }

// };
// int main(){
//     student s1;

//     s1.setname("Naveen").setage(20).setmarks(95.9);

//     s1.display();

//     return 0;
// }

          //Problem-12-->()

// class car{
//         string brand;
//         string model;

//     public:
//         car(){
//             brand = "Toyota";
//             model = "Corolla";
//             cout << "Default Constructor Called " << endl;
//         }
//         void display(){
//             cout << "Brand :"<< brand << endl;
//             cout << "Model :"<< model << endl;
//         }
// };
// int main (){
//     car c1;

//     c1.display();

//     return 0;
// }

      //Problem-13

// class Car{
//         string brand;
//         string model;
//         int year;

//     public:
//         Car(){
//             brand = "unknown";
//             model = "unknown";
//             year = 0;
//             cout << "Defautl constructor called "<< endl;
            
//         }
//         Car (string b, string m, int y){
//             brand = b;
//             model = m;
//             year = y;
//             cout <<"Parameterized constructor called " << endl;
//         }

//     void display(){
//         cout << "Brand :"<< brand << endl;
//         cout <<"Model :" << model << endl;
//         cout << "Year :"<< year << endl;
//     }
// };
// int main (){
//        Car c1;
//     cout << "C! details :"<< endl;
//     c1.display();

//     cout << endl;

//     Car c2("Honda","City",2026);
//     cout <<"C2 details :"<< endl;
//     c2.display();

//     return 0;

// }

      //problem 14...
// class Car{
//     string brand;
//     string model;
//     int year;

//     public:
//         Car(string b, string m, int y){
//             brand = b;
//             model = m;
//             year = y;
//             cout <<"Parameterized constructor is called "<< endl;
//         }
//         Car(Car &c){
//             brand = c.brand;
//             model = c.model;
//             year = c.year;
//             cout <<"Copy Costructor is called "<< endl;
//         }
//         void display() {
//         cout << "Brand : " << brand << endl;
//         cout << "Model : " << model << endl;
//         cout << "Year  : " << year  << endl;
//         }
//     };
//     int main (){
//         Car C1("Honda","City",2026);
//         cout <<"C1 details :"<<endl;
//         C1.display(); cout  << endl;

//         Car C2(C1);
//         cout <<"C2 details is (copy of C1):"<<endl;
//         C2.display();

//         return 0;
//     }

         // problem 15...
// class BankAccount{
//         string name;
//         int accountNo;
//         float balance;
//     public:
//         BankAccount(){
//             name = "unknown";
//             accountNo = 0;
//             balance = 0;
//             cout<<"Default constructor calles :"<<endl;
//         }

//         BankAccount(string n,int acc,float bal){
//             name = n;
//             accountNo = acc;
//             balance = bal;
//             cout<<"Parameterized constructor called :"<<endl;
//         }
//         BankAccount(BankAccount &b){
//             name = b.name;
//             accountNo = b.accountNo;
//             balance = b.balance;
//             cout<<"Copy constructor Called :"<<endl;

//         }
//         void display(){
//             cout<<"Name         :"<<name<<endl;
//             cout<<"Account No   :"<<name<<endl;
//             cout<<"Balance      :"<<name<<endl;

//         }

// };
// int main(){
//     BankAccount b1;
//     cout<<"B1 Details :"<<endl;
//     b1.display();

//     cout<<endl;

//     BankAccount b2("Naveen",0114756246,75000.0);
//     cout<<"B2 details :"<<endl;
//     b2.display();

//     cout<<endl;

//     BankAccount b3(b2);
//     cout<<"B3 details (copy of B2) :"<<endl;
//     b3.display();

//     return 0;
    
// }

       //problem 16..
// class student{
//         string name;
//         int age;
//         float marks;
//     public:
//         student(string n="unknow",int a=18,float m = 0.0){
//             name =n;
//             age = a;
//             marks = m;
//             cout<<"constructor called :"<<endl;
//         }

//         void display(){
//             cout <<"Name   :"<<name<<endl;
//             cout<<"Age    :"<<age<<endl;
//             cout<<"Marks   :"<<marks<<endl;
//         }
// };
// int main (){
//     student s1;
//     cout<<"S1 details :"<<endl;
//     s1.display();
//     cout<<endl;

//     student s2("Naveen");
//     cout<<"S2 details :"<<endl;
//     s1.display();
//     cout<<endl;

//     student s3("Bob", 20);
//     cout << "S3 details:" << endl;
//     s3.display();
//     cout<<endl;

//     student s4("Charlie", 22, 95.5);
//     cout << "S4 details:" << endl;
//     s4.display();

//     return 0;



// }