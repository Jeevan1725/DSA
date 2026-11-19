// // Print all numbers from 1 to n using recursion. 

// #include<iostream>
// using namespace std;

// void num(int i,int n){
//     if(i!=n){
//         cout<<i<<" ";
//         num(i+1,n);
//     }
//     if(i==n)cout<<n;

// }

// int main(){
//     num(1,20);

// }

#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;

    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printNumbers(n);
    return 0;
}
