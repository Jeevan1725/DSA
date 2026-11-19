#include<iostream>
#include<vector>
#include <climits>
using namespace std;

// //Brute force approcach
// int largestsum(vector<int>arr){
//     int n=arr.size();
//     int maxval=INT_MIN;

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){           
//                 sum+=arr[k];
//                 maxval=max(maxval,sum);
//             }
//         }
//     }  
//     return maxval;
// } //Time complexity o(n^3)

// int largestsum(vector<int>arr){
//     int n=arr.size();
//     int maxval=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){            
//             sum+=arr[j];
//             maxval=max(maxval,sum);
            
//         }
//     }
//     return maxval;

// }



int largestsum(vector<int>arr){
    int maxval=INT_MIN;
    int prefix=0;
    for(int i:arr){
        prefix+=i;
        maxval=max(maxval,prefix);
        if(prefix<0) prefix=0;
        

    }
    return maxval;
} //Time complexity o(n)



int main(){
    vector<int>arr={4,-6,2,8};
    cout<<largestsum(arr);
}