//LinearSearch IReturn Value)
#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> nums, int target){
    for(int i: nums){
        if(target == i)
            return i;
    }
    return -1;
}

int main(){
    vector<int>nums = {1,2,3,4,5,6};
    int target;
    cout<<"Target: ";
    cin>>target;
    
    cout<<linearSearch(nums,target);    

    return 0;
}