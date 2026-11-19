//  Print sum of each column in 2D array.
#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={5,3,4,0,1,2,6,8,4,9,3,2};
    int row=3,col=4;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
            
        }
        cout<<sum<<" ";
    }
}
