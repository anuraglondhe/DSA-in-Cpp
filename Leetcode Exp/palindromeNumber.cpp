#include<iostream>
using namespace std;
bool Palindrome (int x) {
    int original = x;
    int pow = 1;
    int ans = 0;

    while(x > 0){
        int rem = x % 10;
        x = x / 10;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return original==ans;
}
int main(){
    return 0;
}