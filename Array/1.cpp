//Find smallest value
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size = 7;
    int nums[] = {2,3,4,5,-6,7,8};
    int smallest = INT_MAX;

    for (int i=0; i < size-1; i++){
        if (nums[i] < smallest){
            smallest= nums[i];
        }
    }
    cout<<"Smallest Value: "<<(smallest)<<endl;

    return 0;
}