
//  **** Find First and Last Position of Element in Sorted Array ****

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]
// Constraints:
// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109

#include<iostream>
#include <vector>
using namespace std;

vector<int>finder(vector<int>arr,int target){
    int n=arr.size();
    int st=0,end=n-1,first=-1,last=-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
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
        else if(target> arr[mid]){
            st=mid+1;
        }


    }

    vector <int>op;
    op.push_back(first);
    op.push_back(last);

    return op;

}

int main(){
    vector<int>arr={2,2,2,2,2,3,4,5,6,7,8,91,100};
    vector<int>op=finder(arr,2);
    cout<<"ans"<<endl;
    for(int i:op){
        cout<<i<<" ";
    }
}
