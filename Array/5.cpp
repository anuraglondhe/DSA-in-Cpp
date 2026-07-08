//LinearSearch 
#include<iostream>
using namespace std;

int linearSearch(int size, int arr[], int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 1, 3, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 50;

    cout<<linearSearch(size,arr,target)<<endl;

    return 0;
}