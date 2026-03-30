#include<iostream>
using namespace std;

int sumOfDig(int num){
    int digSum = 0;
    
    //Using For loop
    for (int i=num; i > 0; i++){
        int lastDig = num % 10;
        num = num / 10;
        digSum = digSum + lastDig;
        
    }
    return digSum; 
}

int main(){
    int num = 3578;
    cout<<"Sum: "<<sumOfDig(num)<<endl;
    return 0;
}