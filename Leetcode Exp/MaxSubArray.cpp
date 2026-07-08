//Maximum SubArray sum
#include<iostream>
#include <climits>
using namespace std;

// void MaxSubArray(){
//     return;
// }

int main(){
    int arr[6]={10,5,2,7,1,9};
    int n = 6;
    int greatest = INT_MIN;
    
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<" ";

            if(greatest < sum){
                greatest = sum;
            }
        }
        cout<<endl;
        sum =0;

    }
    cout<<"\nGreatest sum of subarray: "<<greatest<<endl;

    return 0;
}