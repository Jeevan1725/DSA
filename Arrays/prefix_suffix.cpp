#include<iostream>
#include<vector>
using namespace std;

void prefix(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    ans[0]=arr[0];
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+arr[i];
    }

    cout<<"The prefix of the array is"<<endl;
    for(int i:ans) cout<<i<<" ";
}

void suffix(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    ans[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        ans[i]=ans[i+1]+arr[i];
    }

    cout<<endl<<"The suffix of the array is"<<endl;
    for(int i:ans) cout<<i<<" ";
}

int main(){
    vector<int>arr={6,4,5,-3,2,8};
    prefix(arr);
    suffix(arr);
}