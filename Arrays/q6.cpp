//  Find the third smallest element in an array of unique elements size n. Where n>3



#include<iostream>
#include<climits>
using namespace std;

int minval(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int sndmins(int arr[],int n){
    int min=minval(arr,n);
    int sndmin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<sndmin && arr[i]!=min){
            sndmin=arr[i];
        }
    }
    return sndmin;
}

int thrmin(int arr[],int n){
    int min=minval(arr,n);
    int sndmin= sndmins(arr,n);
    int thrmin=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<thrmin && arr[i]!=min && arr[i]!=sndmin){
            thrmin=arr[i];
        }
    }
    return thrmin;
}





int main(){
    int arr[12]={32,1,1243,45,2345};
    cout<<thrmin(arr,5);
}