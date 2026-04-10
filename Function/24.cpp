#include<iostream>
using namespace std;

void isPrime(int num){
    if (num <= 1){
        cout<<"This is not P number";
        return;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            cout<<"This number is not prime number.";
            return;
        }
    }
    cout<<"This is Prime number.";
}


int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    isPrime(num);
    return 0;
}