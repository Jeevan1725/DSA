// Triplet Sum in Array
// Difficulty: MediumAccuracy: 35.0%Submissions: 329K+Points: 4Average Time: 15m
// Given an array arr[] and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.

// Examples

// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13 
// Output: true 
// Explanation: The triplet {1, 4, 8} sums up to 13
// Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10 
// Output: true 
// Explanation: The triplets {1, 3, 6} and {1, 2, 7} both sum to 10. 
// Input: arr[] = [40, 20, 10, 3, 6, 7], target = 24 
// Output: false 
// Explanation: No triplet in the array sums to 24
// Constraints:
// 3 ≤ arr.size() ≤ 103
// 1 ≤ arr[i] ≤ 105

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

//// brute force Time complexity o(n^3)
// bool threesum(vector<int>arr,int target){
//     int n=arr.size();

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==target)
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // Using binary search time complexity o(n^2 logn)
// bool binarysearh(vector<int>arr,int st,int target){
//     int n=arr.size(),end=n-1;

//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(target==arr[mid])return true;
//         else if(target>arr[mid])st=mid+1;
//         else end=mid-1;
//     }
//     return false;
// }

// bool threesum(vector<int>&arr,int target){
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int sum2=arr[i]+arr[j];
//             int needed=target-sum2;
//             if(binarysearh(arr,j+1,needed))return true ;
//         }
//     }
//     return false;
// }

bool twosum(vector<int>&arr,int st,int target){
    int end=arr.size()-1;

    while(st<end){
        if(arr[st]+arr[end]==target)return true;
        else if(arr[st]+arr[end]>target)end--;
        else st++;
    }
    return false;
}
bool threesum(vector<int>&arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        int requried=target-arr[i];
        if(twosum(arr,i+1,requried))return true;
    }
    return false;
}


int main(){
    vector<int>arr={1, 4, 45, 6, 10, 8};
    int target=13;
    cout<<threesum(arr,target);
}

