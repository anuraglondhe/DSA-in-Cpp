#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int digitSum=0;
    while (num>0){
        int lastDigit=num%10;
        num = num/10;
        digitSum += lastDigit;

        // cout<<digitSum<<endl;
    }
    return digitSum;
}

int main(){
    int num = 145;
    cout<<"Sum= "<<sumOfDigits(num)<<endl;
    return 0;
}