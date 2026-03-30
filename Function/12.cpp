#include<iostream>
using namespace std;

int sumOfDig(int num){

    int DigSum = 0;   
    while(num > 0){
        int lastDig = num%10;
        num = num/10;

        DigSum += lastDig;        
    }
    return DigSum;
}

int main(){
    int num = 2549;
    cout<<"Sum of 2549 :"<<sumOfDig(num)<<endl;
    return 0;
}