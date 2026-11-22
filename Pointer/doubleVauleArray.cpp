#include<iostream>
using namespace std;

void doublee(int *ptr){
    for(int i=0;i<5;i++){
        *ptr=*ptr*2;
        ptr++;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    doublee(arr);

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}