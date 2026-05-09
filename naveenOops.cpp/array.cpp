#include<iostream>
using namespace std;

int main(){
        int arr[60],n;
        cout <<"How many numbers :" << endl;
        cin >>n;
        cout << "Enter :" << n <<"Numbers :"<<endl;
        for(int i=0; i<=n; i++){
            cin>>arr[i];

        }
        cout <<"Your numbers are :"<<endl;
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
            
        }
    return 0;


}

