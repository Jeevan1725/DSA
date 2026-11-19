// 7 4 8 5 3

// round 1              round 2           round 3          round 5

// 7 4 8 5 3           4 7 5 3 8          4 5 3 7 8        4 3 5 7 8
// 4 7 8 5 3           4 7 5 3 8          4 5 3 7 8
// 4 7 8 5 3           4 5 7 3 8                           3 4 5 7 8 (Sorted)
// 4 7 5 8 3                              4 3 5 7 8
//                     4 5 3 7 8
// 4 7 5 3 8

#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>arr,int n){
    for(int i=n-2;i>=0;i--){
        bool swaps=0;
        for(int j=0;j<=i;j++){
            if(arr[j]<arr[j+1]){
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
    vector<int>arr={7,4,8,5,3,2};
    int n=arr.size();
    
    bubblesort(arr,n);
}