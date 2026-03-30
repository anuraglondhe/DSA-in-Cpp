//Prime or Not

#include<iostream>
using namespace std;

void primeOrNot(int n){
    bool isPrime = false;
    if(n > 0){
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                // cout<<"Prime" ;
                isPrime = false;
                break;
            }
            else{
                // cout<<"notPrime" ;
                isPrime = true;
            }
        }

    }else{
        // cout<<"notPrime" ;
        isPrime = false;
    }

    if (isPrime == true){
        cout<<"This is Prime Number."<<endl;
    }else{
        cout<<"This is not Prime Number."<<endl;
    }
}

int main(){
    int n=7;
    // cout<<primeOrNot(n)<<endl;
    primeOrNot(n);
    return 0;
}