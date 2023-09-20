// Array is a pointer.

// int *ptr = &arr[0];
// int *ptr = arr;

// the name of the array is a pointer.
#include <stdio.h>

int main () {
    int aadhar[5];

    int *ptr = &aadhar[0]; // int *ptr = aadhar;

    for(int i=0; i<5; i++) {
        printf("%d index = ", i);
        scanf("%d", (ptr+i));       // &aadhar[i];
    }

    for(int i=0; i<5; i++) {
        printf("%d index = %d\n", i, *(ptr+i));     // aadhar[i];
    }
    return 0;
}