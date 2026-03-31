//Prime or Not

#include<iostream>
using namespace std;

void primeOrNot(int n){
    bool isPrime = true;
    if(n <= 1){
        isPrime = false;
    }else{
        
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                isPrime = false;
                break;
            }
        }

    }

    if (isPrime){
        cout<<"This is Prime Number."<<endl;
    }else{
        cout<<"This is not Prime Number."<<endl;
    }
}

int main(){
    int n=7;
    primeOrNot(n);
    return 0;
}