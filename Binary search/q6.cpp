// 852. Peak Index in a Mountain Array

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity. 

// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

// Example 3:
// Input: arr = [0,10,5,2]
// Output: 1 

// Constraints:

// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.

#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>arr){
    int n=arr.size(),st=0,end=n-1;

    while(st<=end){
        int mid=end+(st-end)/2;

        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            return mid;
        }
        
        else if(arr[mid]<arr[mid+1]){
            st=mid+1;
        }
        else  end=mid-1;
    }
    return -1;
}

int main(){
    vector<int>arr={2,4,6,10,8,5};
    cout<<peakIndexInMountainArray(arr);
}