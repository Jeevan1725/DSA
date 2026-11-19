// 35. Search Insert Position
// Solved
// Easy
// Topics
// Companies
// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& arr, int key) {
          int end=arr.size()-1;
        int st=0;
       
        while(st<=end){
            int mid = st + (end - st) / 2;

        
            if(arr[mid]==key){
                return mid;
            }
            else if(key>arr[mid]){
                st=mid+1;
            }
            else if(key<arr[mid]){
                end=mid-1;
            }
            
        }
        return st;
    
        
    }
int main(){
    vector<int>arr={1,3,5,6};
    cout<<"Element is present at position or the position to be inserted (-1 not present): "<<searchInsert(arr,31);
}