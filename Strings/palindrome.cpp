#include<iostream>
using namespace std;

int main(){
    string s="jeej";
    int st=0,end=s.size()-1;
    while(st<end){
        if(s[st]!=s[end]){
            cout<<"Not an palindrome ";
            return 0;
        }
        st++;
        end--;
    }
    cout<<"It is an Palindrome ";
    return 0;

}