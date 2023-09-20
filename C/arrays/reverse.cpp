#include <stdio.h>

void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int lastVal = arr[n-i-1];

        arr[i] = lastVal;
        arr[n-i-1] = firstVal;

    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    } printf("\n");
    return;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    reverse(arr, 5);
    printArray(arr, 5);

    return 0;
}

// This is call by refernce as arr are pointers.