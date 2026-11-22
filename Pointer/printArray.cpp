#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int * ptr=arr+4;
    cout<<*ptr<<" "<<arr<<endl;
    for(int i=5;i>0;i--){
        cout<<*ptr--<<" ";
    }

    cout<<endl;
    cout<<ptr<<" "<<arr;
    
}