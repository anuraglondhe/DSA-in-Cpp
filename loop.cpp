#include <iostream>
using namespace std;
int main(){
    int n=10,sum=0,sum1=0,sum2=0,i;

    //for loop for sum of odd no

    for (i = 0; i <= n; i++)
    {
        if (i%2 != 0)
        {
            sum+=i;
        }    
        
    }
    cout<<"Sum :"<<sum <<endl;  
    
    

    //While loop for sum of odd no

    i=0;
    while(i<=n){
        if(i%2!=0){
            sum1+=i;
        }
        i++;
    }
    cout<<"Sum :" <<sum1<<endl;

    // return 0;


    //for loop for sum of even no

    for(i=0; i<=n; i++){
        if(i%2==0){
            sum2+=i;
        }
        i++;
                
    }
    cout<<"Sum :"<<sum2;
}
