#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    int d1=0,d2=0;
    for(int i=0;i<4;i++)d1+=arr[i][i];
    int i=0,j=4-1;
    while(j>=0){
        d2+=arr[i][j];
        i++;
        j--;
    }
    cout<<d1<<" "<<d2;


}
