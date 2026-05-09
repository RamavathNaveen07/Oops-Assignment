#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[10]={10,9,3,6,8,29,7,10,99};
    int left = 0;
    int sum =0;
    int k = 3;
    int maxsum = INT_MIN;
    for(int right=0;right<10;right++){
        sum+=arr[right];

        if(right-left+1 == k){
            maxsum =max(sum,maxsum);

            sum -=arr[left];
            left++;
        };
    }
    cout<<"The maxminum subarry sum of lenght 3 :"<<maxsum<<endl;
    return 0;
}

