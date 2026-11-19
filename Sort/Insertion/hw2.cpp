//  Use Insertion Sort Algorithm to sort the array of integers in decreasing order.


#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr){
    int n=arr.size();

    for(int i=n-2;i>=0;i--){
        for(int j=i ;j<n-1;j++){
            if(arr[j]<arr[j+1]){
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