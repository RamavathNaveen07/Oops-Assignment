// #include<iostream>
// using namespace std;

// class currencyconverter{
//     private:
//     double usd;
//     double rate;

//     public:
//     currencyconverter (double u, double r){
//         usd=u;
//         rate=r;
//     }
//     void setUSD (double u){
//         usd=u;

//     }
//     double getUSD(){
//         return usd;

//     }
//     double converttoINR (){
//         return usd*rate;
//     }
// };
// int main(){
//     double usdAmount;

//     cout<<"Enter the amount in USD :";
//     cin>> usdAmount;

//     currencyconverter obj(usdAmount , 90.95);
//     cout<<"USD : $"<<obj.getUSD()<<endl;
//     cout<<"INR : "<<obj.converttoINR() << "RS/-" <<endl;

//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;

class monthlyBill{
    private:
    double monthlyusd;
    float rate;

    public:
    monthlyBill(double u, float r){
        monthlyusd = u;
        rate = 90.95;
        
    }
    double getmonthlyusd (){
        return monthlyusd;
    }
    float calculateBillINR(){
        return monthlyusd*rate;
    }

};
int main (){
    double usdBill , rate ;
    
    cout <<"Enter the monthly USD bill :";
    cin>> usdBill;

    monthlyBill bill(usdBill, rate);
    cout<< fixed << setprecision(2);
    cout << "Monthly bill USD : $" << bill.getmonthlyusd() << endl;
    cout << "Monthly Bill in INR : " << bill.calculateBillINR() << "  RS/-"<< endl;

    return 0;

}

