// write a function to calculate the sum, product & aversge of 2 numbers. print all of these in the main function.

#include <stdio.h>

void calculate(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 4 , b = 5;
    int sum, prod , avg;

    calculate(a , b, &sum, &prod, &avg);
    
    printf("Sum = %d, Product = %d, Avg = %d", sum, prod, avg);

    return 0;
}

void calculate(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
    return;
}