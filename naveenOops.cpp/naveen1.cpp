#include <iostream>
using namespace std;

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
