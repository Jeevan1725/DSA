// Number of occurrence
#include<iostream>
#include<vector>
using namespace std;

int count(vector<int>arr,int target){
    int count=0;
    for(int i:arr){
        if(i==target)count++;              
    }
    return count;
}

int main(){
    vector<int>arr={1, 1, 22,2,2,2,2, 2, 2, 2, 3};
    cout<<count(arr,2);
}