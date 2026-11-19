// Print “Coder Army” 10 times using recursion

#include<iostream>
using namespace std;

void print(int n){
    if (n!=0) {
        cout<<"Coder Army"<<endl;
        print(n-1);
    }   
    
}

int main(){
    print(10);

}