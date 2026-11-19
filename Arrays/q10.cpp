// First Repeating Element
// Difficulty: EasyAccuracy: 32.57%Submissions: 287K+Points: 2Average Time: 15m
// Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

// Note:- The position you return should be according to 1-based indexing. 

// Examples:

// Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
// Output: 2
// Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.
// Input: arr[] = [1, 2, 3, 4]
// Output: -1
// Explanation: All elements appear only once so answer is -1.
// Constraints:
// 1 <= arr.size <= 106
// 0 <= arr[i]<= 106

#include<iostream>
#include<vector>
using namespace std;
int maximum(vector<int>arr){
    int max=arr[0];
    for(int i:arr){
        if(i>max){
            max=i;
        }
    }
    return max;
}
int repeat(vector<int>arr){
    int max=maximum(arr);
    int n=arr.size();
    vector<int>temp(max+1,0);

    for(int i:arr){
        temp[i]++;
    }

    for(int i=0;i<n;i++){
        if(temp[arr[i]]>=2){
            return i+1;
        }
        
    }
    return -1;



}

int main(){
    vector<int>arr={7 ,4 ,0, 9, 4, 8, 8, 2, 4, 5, 5, 1};
    cout<<repeat(arr);
}