// Two numbers a & b are written in a file. Write a program to replace them with their sum.

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("practice4.txt", "r");
    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    // reopening the file
    fptr = fopen("practice4.txt", "w");
    fprintf(fptr, "The sum is : %d", (a + b));

    fclose(fptr);
    return 0;
}