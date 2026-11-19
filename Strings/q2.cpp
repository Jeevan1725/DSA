// String Rotated by 2 Places


// Difficulty: EasyAccuracy: 32.7%Submissions: 259K+Points: 2Average Time: 20m
// Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

// Note: Both rotations should be performed in same direction chosen initially.

// Examples:

// Input: s1 = "amazon", s2 = "azonam"
// Output: true
// Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".
// Input: s1 = "geeksforgeeks", s2 = "geeksgeeksfor"
// Output: false
// Explanation: If we rotate "geeksforgeeks" by two place in any direction, we won't get "geeksgeeksfor".
// Input: s1 = "ab", s2 = "ab"
// Output: true
// Explanation: If we rotate "ab" by two place in any direction, we always get "ab".
// Constraints:
// 1 ≤ s1.length, s2.length ≤ 105

#include<iostream>
using namespace std;

void anti(string& s1){
        int n=s1.size();
    
        for(int i=n-1;i>0;i--){
            swap(s1[i],s1[i-1]);
            
        }
        for(int i=n-1;i>0;i--){
            swap(s1[i],s1[i-1]);
            
        }
        
    }
    
    void clockwise(string& s1){
        int n=s1.size();
        
        for(int i=0;i<n-1;i++){
            swap(s1[i],s1[i+1]);
            
        }
        for(int i=0;i<n-1;i++){
            swap(s1[i],s1[i+1]);
            
        }
        
    }
    
    
    
    bool isRotated(string& s1, string& s2) {
        // code here
        string temp=s1;
        
        anti(s1);
        
        if(s1==s2)return true;
        
        
        clockwise(temp);
      
        
        if(temp==s2)return true;
        
        return false;
            
    }

int main(){

    string s1="amazon";
    string s2="azonam";
    cout<<isRotated(s1, s2);


}