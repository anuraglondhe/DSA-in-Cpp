#include<iostream>
using namespace std;

int bintoDecimal(int binNum){
    int ans =0;
    int pow =1;
    while(binNum>0){
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int binNum =1010;
    cout<<"Decimal NO of 1010 is: "<<bintoDecimal(binNum)<<endl;
    return 0;
}