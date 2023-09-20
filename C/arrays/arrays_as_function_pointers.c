#include <stdio.h>

void printArray(int *arr, int n);       // same as arr[]

int main () {
    int arr[5] = {1,2,3,4,5};

    printArray(arr, 5);

    return 0;
}

void printArray(int *arr, int n) {      // same as arr[]
    for(int i=0 ; i<n ; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}