#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[2][2]={213,34,123,331};
    int maxval=INT_MIN;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            maxval=max(maxval,arr[i][j]);
        }
    }
    cout<<maxval;


}