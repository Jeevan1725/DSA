// Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

// 4 1 2 5 3 

// round 1              round 2           round 3          round 5

// 4 1 2 5 3           1 4 2 3 5          1 2 4 3 5        1 2 3 4 5 
// 4 1 2 3 5           1 4 2 3 5          1 2 4 3 5
// 4 1 2 3 5           1 4 2 3 5                           1 2 3 4 5
// 4 1 2 3 5                              1 2 3 4 5
//                     1 2 4 3 5
// 1 4 2 3 5

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=n-2;i>=0;i++){
        for(int j=n-1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[11]={4,1,2,5,3};
    bubblesort(arr,5);
    

}