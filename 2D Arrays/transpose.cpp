// Transpose of Matrix: ( Use lower triangle for Transpose)

#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int row=3,col=3;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    ////Upper triangle method

    // for(int i=0;i<row;i++){
    //     for(int j=i;j<col;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }
    // cout<<endl;

    //lower triangle method

    row=3,col=4;

    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<endl;



    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}
