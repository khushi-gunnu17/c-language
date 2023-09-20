// Pointer to Pointer = A variable that stores the memory address of another Pointer.

#include <stdio.h>

int main() {
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // Printing the value of I from its pointer to pointer.

    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);

    return 0;
}