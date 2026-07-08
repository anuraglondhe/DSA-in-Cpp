//LinearSearch full code
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
    int arr[] = {1,23,45,93,34,75};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 90;

    int index = linearSearch(size,arr,target);

    if (index == -1){
        cout<<"Element not present in the array.";
    }else{
        cout<<"Element Present at "<<linearSearch(size,arr,target)<<" index.";
    }

    return 0;
}