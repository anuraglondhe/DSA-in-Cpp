#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=1;

    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<(count)<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<"Reverse Triangle";
    return 0;
}