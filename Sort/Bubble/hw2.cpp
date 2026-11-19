//Bubble Sort Algorithm to sort the array of char in ascending order.

#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<char>arr,int n){
    for(int i=n-2;i>=0;i--){
        bool swaps=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps=1;
            }
        }
        if(!swaps){
            break;
        }
    }

    cout<<"Sorted array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<char>arr={'q','e','p','v','z'};
    int n=arr.size();
    
    bubblesort(arr,n);
}