#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4};
    // int arr[0] = {4};
    // int arr[1] = {2};

    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}