// Sort a String
// Difficulty: BasicAccuracy: 64.43%Submissions: 45K+Points: 1
// Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

// Example 1:

// Input:
// S = "edcab"
// Output: "abcde"
// Explanation: characters are in ascending
// order in "abcde".
// Example 2:

// Input:
// S = "xzy"
// Output: "xyz"
// Explanation: characters are in ascending
// order in "xyz".

#include<iostream>
using namespace std;

string sort(string s) {
    // complete the function here
    
    int arr[26]={0};
    
    int n=s.size();
    
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        char temp='a'+i;
        
        while(arr[i]!=0){
            ans+=temp;
            arr[i]--;
            
        }
    }
    return ans;
}

int main(){
    string s="jeevan";
    cout<<sort(s);
}