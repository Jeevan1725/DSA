
// 1108. Defanging an IP Address


// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

 

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

#include<iostream>
using namespace std;

string defangIPaddr(string str) {
        string ans;
        int i=0,n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]!='.')ans+=str[i];
            else ans+="[.]";
        }
        return ans;
        
}

int main(){
    string s1="1.1.1.1";
    string str= defangIPaddr(s1);
    cout<<str;
}