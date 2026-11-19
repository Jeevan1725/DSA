//  Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;

int search(int arr[],int n){
    for(int i=0;i<7;i++){
        if(n==arr[i]){return i;}
    }
    return -1;
}

int main(){
    int arr[20]={1,2,12,3,212,33,333};
    int n;
    cout<<"Enter the element to be searched: ";
    cin>>n;

    cout<<"Element found at index (-1==not found): ";
    cout<<search(arr,n);
}