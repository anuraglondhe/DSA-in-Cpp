#include<iostream>
using namespace std;

void primeOrNot(int n){
    if(n<=1){
        cout<<"This number is not Prime number."<<endl;
        return;
    }

    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
        cout<<"This number is not Prime number."<<endl;
        return;
        }
    }
    cout<<"This number is Prime number."<<endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    primeOrNot(n);
    return 0;
}