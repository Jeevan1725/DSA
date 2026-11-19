// Selection Sort Algorithm to sort the array of char in ascending order.


#include<iostream>
using namespace std;

int main(){
    char arr[101];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<< i+1<< " elements: ";
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--){
        int index=i;
        for(int j=0;j<=i-1;j++){
            if(arr[index]<arr[j]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    cout<<"Sorted array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
