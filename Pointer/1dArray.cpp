#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int*ptr=new int [n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        *(ptr+i)=temp;
    }
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }


}