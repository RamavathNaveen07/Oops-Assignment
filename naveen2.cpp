#include<iostream>
using namespace std;
// class bank{
// private:
//     int balance;
// public:
//     bank(int r){
//         balance = r;
//     }

//     int deposit(int amt){
//         if(amt > 0){
//             balance +=amt;
//         }
//     }

//     int withdaraw(int amt){
//         if(amt <= balance){
//             balance -= amt;
//         }
//     }

//     int getbalance(){
//         return balance;
//     }
// };


// int main () {
//     bank s1(1000);
//     s1.deposit(500);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     s1.withdaraw(1000);
//     cout<<"The balance is :"<<s1.getbalance()<<endl;
//     return 0;
// }



class BinarySearch {
private:
    int arr[6];

public:
    void input() {
        cout << "Enter 6 sorted elements:\n";
        for(int i = 0; i < 6; i++) {
            cin >> arr[i];
        }
    }

    void search() {
        int key;
        cout << "Enter element to search: ";
        cin >> key;

        int low = 0, high = 5, mid;

        while(low <= high) {
            mid = (low + high) / 2;

            if(arr[mid] == key) {
                cout << "Element found at position " << mid + 1;
                return;
            }
            else if(arr[mid] < key) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << "Element not found";
    }
};

int main() {
    BinarySearch bs;
    bs.input();
    bs.search();
    return 0;
}
