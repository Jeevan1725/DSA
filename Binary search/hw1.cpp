// 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
// arr={30,28,20,16,4}

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int key){
    int end=arr.size()-1;
    int st=0;
    
    while(st<=end){
        int mid=st+(end-st/2);
        if(arr[mid]==key){
            return mid+1;
        }
        else if(key<arr[mid]){
            st=mid+1;

        }
        else if(key>arr[mid]){
            end=mid-1;

        }
    }
    return -1;
}
int main(){
    vector<int>arr={30,28,20,16,4};
    cout<<"Element is present at position (-1 not present): "<<binarysearch(arr,30);
}