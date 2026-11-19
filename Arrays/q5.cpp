// Find the second largest element in an array of unique elements of size n. Where n>3.

#include<iostream>
using namespace std;

int maxval(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int sndmax(int arr[],int n){
    int max=maxval(arr,n);
    int sndmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>sndmax && arr[i]!=max){
            sndmax=arr[i];
        }
    }
    return sndmax;

}

int main(){
    int arr[12]={12,32,1243,45,2345};
    cout<<sndmax(arr,8);
}