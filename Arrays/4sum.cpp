// Four Elements
// Difficulty: EasyAccuracy: 22.55%Submissions: 61K+Points: 2
// Given an array A of N integers. You have to find whether a combination of four elements in the array whose sum is equal to a given value X exists or not.
// Example 1:
// Input:
// N = 6
// A[] = {1, 5, 1, 0, 6, 0}
// X = 7
// Output:
// 1
// Explantion:
// 1, 5, 1, 0 are the four elements which makes sum 7.
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function find4Numbers() which takes the array A[], its size N and an integer X as inputs and returns true if combination is found else false. Driver code will print 1 or 0 accordingly.
// Expected Time Complexity: O(N3)
// Expected Auxiliary Space: O(1)
// Constraints:
// 4 <= N <= 100
// 1 <= A[i] <= 1000

#include<iostream>
using namespace std;

bool find4Numbers(int arr[], int n, int target) {
    
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int st=j+1,end=n-1;
            int required=target-(arr[i]+arr[j]);
            while(st<end){
                int sum=arr[st]+arr[end];
                if(sum==required)return true;
                else if(sum>required)end--;
                else st++;
                
            }
        }
    }
    return false;     
};

int main(){
    int arr[]={1, 5, 1, 0, 6, 0};
    cout<<find4Numbers(arr,6,7);
}