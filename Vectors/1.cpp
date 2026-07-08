#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    for(int i : vec){
        cout<<i<<"\t";
    }
    cout<<endl;
    cout<<"Size of vector: "<<vec.size()<<endl;
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;
    return 0;
}