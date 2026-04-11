#include<iostream>
using namespace std;

int decitoBinary(int num){
    int ans = 0;
    int pow =1;
    while(num>0){
        int rem = num%2;
        num/=2;
        ans += (rem * pow);
        pow *= 10;

    }
    return ans;
}

int main(){
    int num = 10;
    cout<< decitoBinary(num)<<endl;
    return 0;
}