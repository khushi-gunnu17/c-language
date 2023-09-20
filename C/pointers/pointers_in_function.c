// Pointers in function call
    /*  Call by value           Call by refernce
    
        We pass value of          We pass address of 
        variable as argument       variable as argument. */

#include <stdio.h>

int square(int n);
int _square(int *n);

int main() {
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);

    return 0;
}

// Call by value
int square(int n) {
    n = n*n;
    printf("square = %d\n", n);
}

// Call by refernce
int _square(int *n) {
    *n = (*n)*(*n);
    printf("square = %d\n", *n);
}