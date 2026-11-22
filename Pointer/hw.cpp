#include<iostream>
using namespace std;


int main(){

    char arr[5]="1234";

    char *ptr=arr;
    cout<<(ptr+3)<<endl;
    cout<<(ptr)<<endl;

    int n=123;
    int * ptr3=&n;
    cout<<ptr3<<endl;

    char name='a';
    char * ptr2=&name;
    cout<<(void *)ptr2<<endl;
    cout<<(void*)&name;

}