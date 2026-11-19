// Count the Zeros
// Difficulty: EasyAccuracy: 68.08%Submissions: 119K+Points: 2Average Time: 15m
// Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

// Examples:

// Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: 3
// Explanation: There are 3 0's in the given array.
// Input: arr[] = [0, 0, 0, 0, 0]
// Output: 5
// Explanation: There are 5 0's in the array.
// Constraints:
// 1 <= arr.size <= 105
// 0 <= arr[i] <= 1

#include<iostream>
#include<vector>
using namespace std;

int countzeros(vector<int>arr){
    int n=arr.size();
    int st=0,end=n-1,first=0,last=-1,target=0;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(target>arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }

    st=0,end=n-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            last=mid;
            st=mid+1;
        }
        else if(target>arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return last-first+1;
}

int main(){
    vector<int>arr={1,1,1,1,1,0,0,0,0,0};
    cout<<countzeros(arr);
}

