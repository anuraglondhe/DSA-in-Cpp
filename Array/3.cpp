//Greatest Value and their index
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {10,-4,5,19,18,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int greatest = INT_MIN;
    int index = -1;
    for(int i=0; i<n; i++){
        if(greatest<arr[i]){
            greatest=arr[i];
            index = i;
        }
    }
    cout<<"Greatest No.: "<<greatest<<endl;
    cout<<"Index of Greatest No.: "<<index<<endl;
    return 0;
}