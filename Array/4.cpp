//Pass by reference

#include<iostream>
using namespace std;

void changArr(int arr[], int size){
    
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i] ;
    }
}

// int originalArr(int arr,int size){

// }


int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Original Array: ";

    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }


    changArr(arr,size);

    cout<<"\nChanged Array: ";

    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }




    // cout<<size<<endl;
    return 0;
}