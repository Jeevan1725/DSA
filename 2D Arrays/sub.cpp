//Given 2 matrices A and B, Print A-B.

#include<iostream>
using namespace std;

int main(){
    int arr[2][2]={1,2,3,4};
    int arr2[2][2]={8,7,6,5};
    int ans[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            ans[i][j]=arr[i][j]-arr2[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
    }
}



