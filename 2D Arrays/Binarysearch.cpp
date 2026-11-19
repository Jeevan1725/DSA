#include<iostream>
#include<vector>
using namespace std;

// // Time complexity o(N(log m)
// bool BinarySearch(vector <vector<int>> matrix,int target){
//     int row=matrix.size(),col=matrix[0].size();
//     for(int i=0;i<row;i++){
//         int st=0,end=col-1;
    
//         if(matrix[i][st]<=target && matrix[i][end]>=target ){

//             while(st<=end){
//                 int mid=st+(end-st)/2;
//                 if(matrix[i][mid]==target) return true;

//                 else if(matrix[i][mid]<target){
//                     st=mid+1;
//                 }
//                 else{
//                     end=mid-1;
//                 }
//             }            
//         }
//     }
//     return false;
// }

//time complexity o(log(n*m))
bool BinarySearch(vector <vector<int>> matrix,int target){
    int row=matrix.size(), col=matrix[0].size();

    int st=0,end=row*col-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        int i=mid/col ,j=mid%col;

        if(matrix[i][j]==target)return true;

        else if(matrix[i][j]<target){
            st=mid+1;
        }  
        else end=mid-1;        
    }

    return false;
}

int main(){
    vector <vector<int>> matrix={ {1,3,5,7} , {10,11,16,20} , {23,30,34,60} };
    cout<<BinarySearch(matrix,23);
}