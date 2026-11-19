// Print all odd number from n to 1 using recursion

#include <iostream>
using namespace std;

void odd(int n) {
    if (n == 0)
        return;   // base case

    if (n % 2 != 0)
        cout << n << " ";
 
    odd(n - 1);   // recursive call
}

int main() {
    odd(100);
    return 0;
}
