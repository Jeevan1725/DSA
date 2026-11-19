#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int key){
    int n= arr.size();
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid+1;
            
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            st=mid+1;
            
        }    
        
    }
    return -1;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,91,100};
    cout<<"Element is present at position (-1 not present): "<<binarysearch(arr,1090);
}