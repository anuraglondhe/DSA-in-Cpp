#include<iostream>
using namespace std;

void primeNo(int num){
    for(int n=2; n <= num; n++){
        bool isPrime = true;

        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<n<<endl;
        }
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    primeNo(num);
    return 0;
}