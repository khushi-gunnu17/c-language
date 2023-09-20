#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {

    int x = 3, y = 5;

    printf("Call by value\n");
    swap(x , y);
    printf("x = %d, y = %d\n", x , y);

    printf("Call by refrence\n");
    _swap(&x , &y);
    printf("x = %d, y = %d\n", x , y);
    return 0;
}

// Call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n", a , b);
}

// Call by refernce
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d, b = %d\n", *a , *b);
}

// We use call by refernce when we need to return multiple values from a function without actually returning it from return keyword, but with the help of pointers.
