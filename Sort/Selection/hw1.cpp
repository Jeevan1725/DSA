// Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

// Example

// 10 8  2 3 1 4   total 6 elements  ie total rounds requried n-1 6-1=5 round to sort

// 4 8 2 3 1 10      1st round
// 4 1 2 3 8 10      2nd round
// 3 1 2 4 8 10      3rd round
// 2 1 3 4 8 10      4th round
// 1 2 3 4 8 10      5th round

#include<iostream>
using namespace std;

int main(){
    int arr[101];
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
