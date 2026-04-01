#include <iostream>
using namespace std;

void primeNo(int num) {
    if (num < 2) {
        cout << "No prime numbers found." << endl;
        return;
    }

    for (int n = 2; n <= num; n++) {
        bool isPrime = true;

        // Optimization: Check if n is divisible by any i up to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << n << " "; // Space-separated for better readability
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the upper limit: ";
    if (!(cin >> num)) {
        cout << "Invalid input." << endl;
        return 1;
    }
    
    primeNo(num);
    return 0;
}