//WAF to swap the max and min number of an array.
#include<iostream>
#include <climits>
using namespace std;

// int swapMinMax(int n, int arr[]){
//     int smallest=INT_MAX, greatest=INT_MIN, brr[n],i,j;
//     for(i=0; i<n; i++){
//         if(arr[i]<smallest){
//             smallest =arr[i];
//         }
//     }
//     for(j=0; j<n; j++){
//         if(arr[j]>greatest){
//             greatest = arr[j];            
//         }
//     }
//     for(int k=0; k<n; k++){
//         swap(arr[i],arr[j]);

//     }
    
//     return ;

// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n; i++){
//         cout<<swapMinMax(n,arr);

//     }

//     return 0;
// }


void swapMinMax(int n, int arr[]){
    int minIndex=0, maxIndex=0;

    for(int i=1; i<n; i++){
        if(arr[i]<arr[minIndex])
            minIndex = i;

        if(arr[i]>arr[maxIndex])
            maxIndex = i;
    }
    
    swap(arr[minIndex], arr[maxIndex]);
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    swapMinMax(n,arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}