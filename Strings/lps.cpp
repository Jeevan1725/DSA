#include<iostream>
#include<vector>
using namespace std;

int lps(string s){
    int n=s.size();
    vector<string>ans1(n);
    vector<string>ans2(n);
    string temp1;
    for(int i=0;i<n-1;i++){
        temp1+=s[i];
        ans1[i]=temp1;
    }

    string temp2;
    for(int i=0;i<n-1;i++){
        temp2=s[n-1-i]+temp2;
        ans2[i]=temp2;
    }
    size_t len=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(ans1[i]==ans2[j]){
                len=max(len,ans1[i].size());
            }
        }
    }
    return len;


}
int main(){
    string str;
    cin>>str;
    cout<<lps(str);
}