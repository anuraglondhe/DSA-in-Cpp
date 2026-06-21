//Find the smallest value of index
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int i,index=-1;
    int arr[]={25,53,84,85,-74,34};
    int n =sizeof(arr)/sizeof(arr[0]);
    int smallest = INT_MAX;
    for(i=0; i<n; i++){
        if(smallest>arr[i]){
            smallest=arr[i];
            index = i;
        }        
    }
    cout<<"Index of smallest value: "<<index<<endl;
    cout<<"Smallest value: "<<smallest<<endl;
    return 0;
}