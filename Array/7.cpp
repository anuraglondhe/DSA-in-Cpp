//Write a Function to calculate sum and product of all numbers in an array.
#include<iostream>
using namespace std;

int sum(int n, int arr[]){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int product(int n, int arr[]){
    int product=1;
    for(int i=0; i<n; i++){
        product *= arr[i];
    }
    return product;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<sum(n,arr)<<endl;
    cout<<product(n,arr);

    return 0;
}