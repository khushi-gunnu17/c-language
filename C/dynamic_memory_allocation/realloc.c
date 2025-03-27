// Allocate memoy for 5 numbers. Then dynamically increase it to 8 numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {

    // runtime allocation of memory
    int *ptr;
    ptr = (int*) calloc(5, sizeof(int));

    printf("Enter numbers(5) : ");
    for (int i=0; i<5 ; i++) {
        scanf("%d", &ptr[i]);
    }

    // reallocation of memory
    ptr = realloc(ptr, 8);

    printf("Enter numbers(8) : ");
    for (int i=0; i<8 ; i++) {
        scanf("%d", &ptr[i]);
    }

    // printing the numbers 
    for (int i=0; i<8 ; i++) {
        printf("Number %d is %d\n", i, ptr[i]);
    }

    return 0;
}