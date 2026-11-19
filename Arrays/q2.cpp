// 2: Calculate the average of elements in an array of size 18.

//  Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;
int main(){
    int a[200];
    int s=0;
    for(int i=0;i<18;i++){

        cout<<"Enter "<<i+1<<" element";
        cin>>a[i];
        cout<<endl;

    }
    for(int i=0;i<18;i++){
        s+=a[i];
    }

    cout<<"The average of 20 digit is "<<s/18;
        
}
