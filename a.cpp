// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<n; j++){
//     //         cout<<"* ";
//     //     }
//     //     cout<< endl;
//     // }

//     // cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j<=i; j++){
//             cout << "* ";
//             // break;
//         }
//         cout<< endl;
//     }  

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//     int n=6;

//     for(int i=0; i<n; i++){
//         for(int j=1; j<i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=1;

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<count<<" "; 
            count++;
            
        }
        cout<<endl;
    }
    cout<<"After pattern count is :"<<count;
    return 0;
}
