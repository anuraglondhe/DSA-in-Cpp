//Print 1 to n Prime numbers

#include<iostream>
using namespace std;

void primeNo(int num){
    for(int n=3; n<=num; n++){
                
        for(int i=2; i*i <=n; i++){
            if(n%i==0){
                return;            
            }
        }
        cout<<(n)<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    primeNo(num);

    return 0;
}


// #include<iostream>
// using namespace std;

// void primeNo(int num){
//     for(int n = 1; n <= num; n++){
//         if(n <= 1){
//             continue;  // skip 0 and 1
//         }

//         bool isPrime = true;

//         for(int i = 2; i * i <= n; i++){
//             if(n % i == 0){
//                 isPrime = false;
//                 break;  // stop checking further
//             }
//         }

//         if(isPrime){
//             cout << n << " ";
//         }
//     }
// }

// int main(){
//     int num;
//     cout << "Enter number : ";
//     cin >> num;

//     primeNo(num);

//     return 0;
// }