// Selection Sort Algorithm to sort the array of integers in decreasing order.

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]<arr[j]){
                index=j;
            }     
        }
        swap(arr[index],arr[i]);
    }
    cout<<"Sorted array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}