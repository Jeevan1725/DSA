//  Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.

// 7 5 2 4 3 

// 1st round 7 5 2 3 4
// 2nd round 7 5 2 3 4
// 3rd round 7 2 3 4 5
// 4th round 2 3 4 5 7

#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr){
    int n=arr.size();

    for(int i=n-2;i>=0;i--){
        for(int j=i ;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            else break;
        }     
    }

}


int main(){
    vector <int> arr={7,5,2,3,12,3212,32,76,34,67,54};
    insertionsort(arr);
     for(int i:arr){
        cout<<i<<" ";
    }
    
}