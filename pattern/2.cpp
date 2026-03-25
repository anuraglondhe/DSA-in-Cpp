//Square
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count = 1;

    //For Loop
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 



    //While Loop

    int i=1;
    while(i<=n){
        int j=1;

        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }



    return 0;
}