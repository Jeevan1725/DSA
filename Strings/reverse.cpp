#include<iostream>
using namespace std;

int main(){
    string s="jeevan";
    int st=0,end=s.size()-1;

    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
    cout<<s;

}