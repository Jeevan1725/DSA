// 42. Trapping Rain Water
// Hard
// Topics
// premium lock icon
// Companies
// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
// Example 1:
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// Example 2:
// Input: height = [4,2,0,3,2,5]
// Output: 9
// Constraints:
// n == height.length
// 1 <= n <= 2 * 104
// 0 <= height[i] <= 10
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

////Time complexity o(n) & space complrxity o(n)
// int trap(vector<int>arr){
//     int n=arr.size();
//     vector<int>prefix(n);
 
//     int prefixmax=arr[0];
//     prefix[0]=0;
//     for(int i=1;i<n;i++){
//         prefixmax=max(prefixmax,arr[i-1]);
//         prefix[i]=prefixmax;
//     }   

//     vector<int>suffix(n);
//     int suffixmax=arr[n-1];
//     suffix[n-1]=0;
//     for(int j=n-2;j>=0;j--){
//         suffixmax=max(suffixmax,arr[j+1]);
//         suffix[j]=suffixmax;
//     }  

//     int trapwater=0;
//     for(int i=1;i<n-1;i++){
//         int temp=min(suffix[i],prefix[i]);
//         if(temp-arr[i]>=0) 
//         trapwater+=temp-arr[i];
//     }
//     return trapwater;

// }

//Time complexity o(n) & space complrxity o(1)
int trap(vector<int>arr){
    int n=arr.size();
    int maximum=0;
    int idx=0;

    for(int i=0;i<n;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
            idx=i;
        }        
    }
    
   
    int trapwater=0;
    int leftmax=0;
    for(int i=0;i<idx;i++){
        if(leftmax<arr[i]){
            leftmax=arr[i];
        }   
        int temp=min(maximum,leftmax);
        
        if(temp-arr[i]>0)trapwater+=temp-arr[i];
    }


    int rightmax=0;
    for(int i=n-1;i>idx;i--){
        if(rightmax<arr[i]){
            rightmax=arr[i];
        }   
        int temp=min(maximum,rightmax);
        
        if(temp-arr[i]>0)trapwater+=temp-arr[i];
    }
    return trapwater;


    
   
}


int main(){
    vector<int>arr={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(arr);
}