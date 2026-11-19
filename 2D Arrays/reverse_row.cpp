#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={5,3,4,0,1,2,6,8,4,9,3,2};
    int row=3,col=4;
    for(int i=0;i<row;i++){
        int st=i,end=col-1;
        while(st<end){
            swap(arr[i][st],arr[i][end]);
            st++;
            end--;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}