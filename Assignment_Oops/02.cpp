#include<iostream>
using namespace std;

// class book
// {

// private:
//     string tittle;
//     string author;
//     float price;

// public:
//     void setDetails(string t, string a, float p)
//     {
//         tittle = t;
//         author = a;
//         price = p;
//     }

//     void displayDetails(){
//         cout << "Tittle :"<< tittle << endl;
//         cout << "Author :"<< author << endl;
//         cout << "price :" << price << endl;
//     }

// };

// int main (){
//     book b1;
//     b1.setDetails( "Sethaka Sudha" , "Vemana" , 270);
//     b1.displayDetails();

//     return 0;
// }

class book{
    private:
        string title;
        string author;
        float price;
    public:
        void setData(string t, string a, float r){
            author = a;
            title = t;
            price = r;
        }
        void display (){
            cout << "Athor :" <<author << endl;
            cout << "Title :"<< title << endl;
            cout <<"Price :"<<price <<endl;

        }
        
};

int main (){
    book B1;
    B1.setData("Naveen","how to be a Genious",500);
    B1.display();

    return 0;
}
