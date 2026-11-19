#include<iostream>
using namespace std;

// // Using function 
void print(int arr[][3],int rows,int col){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}


int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int row=4;
    int col=3;
    print(arr,4,3);
}



// //without using function
// int main(){
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};

//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }