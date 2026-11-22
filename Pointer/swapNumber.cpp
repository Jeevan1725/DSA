#include<iostream>
using namespace std;

//using pointers
// void Swap(int * a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main(){
//     int a=12;
//     int b=13;
//     cout<<a<<" "<<b<<endl;

//     Swap(&a,&b);
//     cout<<a<<" "<<b;
// }


// pass by refernces
void Swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=12;
    int b=13;

    int &a2=a;
    int &b2=b;

    cout<<&a<<" "<<&b<<endl;
    cout<<&a2<<" "<<&b2<<endl;

    Swap(a,b);
    cout<<a<<" "<<b;
}