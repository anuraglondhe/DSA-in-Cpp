#include<iostream>
using namespace std;

int sumOfDig(int n){
    int DigSum=0;
    while(n>0){
        int lastDig=n%10;
        n/=10;
        DigSum+=lastDig;        
    }
    return DigSum;
}

int main(){
    int n=2356;
    cout<<"Sum of 2356 is "<<sumOfDig(2356)<<endl;
    return 0;
} 