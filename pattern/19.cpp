// Hollo-Diamond Pattern

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    int num=3;
    for(int i=0; i<num; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=0; j<num-i; j++){
            cout<<"*";
        }
        for(int j=0; j<num-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}