//decimal to binary number

#include<iostream>
using namespace std;

int dectoBin(int num){
    int pow=1;
    int ans=0;

    while(num>0){
        int rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow=pow*10;
    }
    return ans;

}

int main(){
    cout<<"Binary No.: (1-10)"<<endl;
    for(int i=1; i<=10; i++){
        cout<<i<<"=" << dectoBin(i)<<endl;
    }

    return 0;
}