// #include<iostream>
// using namespace std;

// inline int cube(int a){
//     return a*a*a;
// }

// float Circlearea(float r){
//     return 3.15*r*r;
// }
// int Rectanglearea(int l, int b){
//     return l*b;
// }
// int Squarearea(int s){
//     return s*s;
// }
// void swap(int &a, int&b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main (){
//     cout << "Cube of 5 is :"<< cube(5)<<endl;
//     cout <<"Area of circle is :"<<Circlearea(9.85)<<endl;
//     cout << "Area of the Rectangle is :"<<Rectanglearea(10,15)<<endl;
//     cout << "Area of the Square is :"<< Squarearea(10)<<endl;

//     int x = 10,  y = 15;
//     swap(x, y);
//     cout << "After swapping :"<< endl;
//     cout <<"X = "<< x << endl;
//     cout <<"y = "<< y<< endl;
//     return 0;

// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     ofstream outFile("student.txt");

//     outFile << "Name: Rahul" << endl;
//     outFile << "Roll No: 101" << endl;
//     outFile << "Marks: 95" << endl;

//     outFile.close();

//     cout << "Data written successfully!" << endl; 

//     ifstream inFile("student.txt");

//     if(!inFile) {
//         cout << "File not found!" << endl;
//     } else {
//         cout << "File opened successfully!" << endl;

//         string line;
//         while(getline(inFile, line)) {
//             cout << line << endl;
//         }

//         inFile.close();
//     }

//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// class Student {
// public:
//     char name[50];
//     int rollNo;
//     float marks;

//     void getData() {
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter Roll No: ";
//         cin >> rollNo;
//         cout << "Enter Marks: ";
//         cin >> marks;
//     }

//     void showData() {
//         cout << "Name: " << name << endl;
//         cout << "Roll: " << rollNo << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student s;
//     fstream file;

//     // Write object to file
//     file.open("student.dat", ios::out|ios::binary);
//     s.getData();
//     file.write((char*)&s, sizeof(s));
//     file.close();

//     // Read object from file
//     file.open("student.dat", ios::in|ios::binary);
//     file.read((char*)&s, sizeof(s));
//     s.showData();
//     file.close();

//     return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    Student s[3];
    fstream file;

    // Enter and write records
    file.open("students.dat",
               ios::out | ios::binary);

    for(int i = 0; i < 3; i++) {
        cout << "Enter Name: ";
        cin >> s[i].name;
        cout << "Enter Roll No: ";
        cin >> s[i].rollNo;
        cout << "Enter Marks: ";
        cin >> s[i].marks;
        file.write((char*)&s[i], sizeof(s[i]));
    }
    file.close();

    // Read and display all records
    cout << "\n--- Student Records ---\n";
    file.open("students.dat",
               ios::in | ios::binary);

    Student temp;
    while(file.read((char*)&temp, sizeof(temp))) {
        cout << "Name  : " << temp.name << endl;
        cout << "Roll  : " << temp.rollNo << endl;
        cout << "Marks : " << temp.marks << endl;
        cout << "-------------------\n";
    }
    file.close();

    return 0;
}