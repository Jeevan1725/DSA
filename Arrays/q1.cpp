//  Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;
int main(){
    int a[200];
    int s=0;
    for(int i=0;i<20;i++){

        cout<<"Enter "<<i+1<<" element";
        cin>>a[i];
        cout<<endl;

    }
    for(int i=0;i<20;i++){
        s+=a[i];
    }

    cout<<"The sum of 20 digit is "<<s;
        
}
