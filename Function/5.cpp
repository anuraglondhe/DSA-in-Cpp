#include<iostream>
using namespace std;

int SumN(int n){
    int sum = 0;    
    for(int i=0; i<=n; i++){ 
        sum+=i;
    }
    return sum;       
}
int main(){
    cout<<"Sum of 0 to 5: "<<SumN(5) << endl;
    cout<<"Sum of 0 to 10: "<<SumN(10)<<endl;
    return 0;
}