// Number of occurrence
// Difficulty: EasyAccuracy: 59.34%Submissions: 326K+Points: 2Average Time: 20m
// Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

// Examples :

// Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
// Output: 4
// Explanation: target = 2 occurs 4 times in the given array so the output is 4.
// Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 4
// Output: 0
// Explanation: target = 4 is not present in the given array so the output is 0.
// Input: arr[] = [8, 9, 10, 12, 12, 12], target = 12
// Output: 3
// Explanation: target = 12 occurs 3 times in the given array so the output is 3.
// Constraints:
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i] ≤ 106
// 1 ≤ target ≤ 106


#include<iostream>
#include<vector>
using namespace std;

int countzeros(vector<int>arr,int target){
    int n=arr.size();
    int st=0,end=n-1,first=0,last=-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(target<arr[mid]){
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
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return last-first+1;
}

int main(){
    vector<int>arr={0,0,0,0,0,1,1,1};
    cout<<countzeros(arr,1);
}

