#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int>arr){
    int n=arr.size(),c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
            c++;
        }
        cout<<endl;
    }
    cout<<c;
}

int main(){
    vector<int>arr={4,3,7,2};
    subarray(arr);
}