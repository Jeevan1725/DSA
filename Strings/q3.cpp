// 1832. Check if the Sentence Is Pangram

// Hint
// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:

// Input: sentence = "leetcode"
// Output: false

#include<iostream>
using namespace std;

bool checkIfPangram(string sentence){
    int arr[26]={0};

    for(int i=0;i<sentence.size();i++){
        arr[sentence[i]-'a']=1;
    }
    
    for(int i=0;i<sentence.size();i++){
        if(arr[i]==0)return false;
    }
    return true;
}

int main(){
    string s1="thequickbrownfoxjumpsoverthelazydog";
    cout<<checkIfPangram(s1);
}