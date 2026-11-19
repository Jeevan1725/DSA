// Remove Element from Array
// Programming
// Two Pointers
// medium
// 45.0% Success

// 227

// 57

// Bookmark
// Asked In:
// Problem Description
 
 

// Given an array A and a value B, remove all the instances of that value in the array.
// Also, return the number of elements left in the array after the operation. It does not matter what is left beyond the expected length.
// Try to do it in less than linear additional space complexity.


// Problem Constraints
// 1 <= |A| <= 106
// 0 <= Ai , B <= 2 * 109


// Input Format
// The first argument is an integer array A.
// The second argument is an integer B.


// Output Format
// Return an integer denoting the number of elements left in the array after the operation, also update the given array A.


// Example Input
// A = [4, 1, 1, 2, 1, 3]
// B = 1


// Example Output
// Length  : 3 
// Array A : [4, 2, 3] 



// Example Explanation
// If array A is [4, 1, 1, 2, 1, 3]
// and the value element is 1,
// then the new length is 3, and A is now [4, 2, 3]


#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int> &A, int B) {
    int idx = 0;

    for (int i = 0; i < A.size(); i++) {
        if (A[i] != B) {
            A[idx++] = A[i];
        }
    }

    return idx;
}

int main(){
    vector<int>arr={4, 1, 1, 2, 1, 3};
    cout<<removeElement(arr,1);
}
