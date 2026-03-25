#include<iostream>
using namespace std;
int main(){
    // int n=10, i=2;
    // //Check prime or not
    // // cout<<"Hi ";
    // while(i<n){
    //     if(n%i==0){
    //         cout<<"Not Prime ";
    //     }
    //     else i++;
        
    // }
    // cout<<"Prime ";   
    
    // int n=14;
    // bool isPrime=true;

    // for(int i=2; i<n; i++){
            // if(n%i==0){
                //     isPrime=false;
                //     break;

            // }
    // }

    // if(isPrime==true){
    //     cout<<"Prime no.\n";
    // }else{
    //     cout<<"Not Prime no.\n";
    // }



    // int n=29;
    // bool isPrime=true;
    // for(int i=2; i<=n; i++){
    //     if(n%i==0){
    //         isPrime==false;
    //         break;
    //     }

    //     if(isPrime == true){
    //         cout<<"Prime no.\n";
    //     }else{
    //         cout<<"Not Prime no.\n";
    //     }

    // }

    // int n = 29; 
    // bool isPrime = true; 

    // for(int i = 2; i * i <= n; i++) { // Optimization: i * i <= n is faster
    //     if(n % i == 0) { 
    //         isPrime = false; // Fixed assignment
    //         break;
    //     } 
    // }

    // if(isPrime && n > 1) { 
    //     cout << "Prime no.\n"; 
    // } else { 
    //     cout << "Not Prime no.\n"; 
    // }




        int n=7,i=2;
        bool isPrime=true;

        if(n<=1){
            isPrime=false;

        }else{

            for(i=2;i*i<n;i++){
                if(n%i==0){
                    isPrime=false;
                    break;
                    
                }
            }
            
        }
        
        
        if (isPrime){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not Prime Number";

        }



    return 0;
}
