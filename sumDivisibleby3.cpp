// // Sum of all numbers from 1 to n which are divisible by 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n=20;
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         if(i%3==0){
//             cout<<i<<"\t";
//             sum+=i;
//         }
//     }
//     cout<<endl;
//     cout<<"Sum:"<<sum;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n=20;
    int sum=0;

    for(int i=0; i<=n; i++){
        for(int j=3; j<=i; j+=3){
            if(j==i){
                cout<<i<<"\t";
                sum+=i;
            }
        }
    }
    cout<<"Sum:"<<sum;



    return 0;
}