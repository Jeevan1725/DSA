#include <iostream>
#include <climits>
using namespace std;

bool found(int arr[], int key, int n) {
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            return true;
        }
    }
    return false;
}

int posmin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int missing(int arr[], int n, int min) {
    if (!found(arr, min + 1, n)) {
        return min + 1;
    } else {
        return missing(arr, n, min + 1);
    }
}

int main() {
    int arr[10] = {100, 21, 321, 22, 321, -1, -3};
    int min = posmin(arr, 7);
    cout << "Smallest positive missing number: " << missing(arr, 7, min);
}
