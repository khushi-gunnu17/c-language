// Write a program to print all the odd numbers from 1 to n in a text file

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("practice3.txt", "w");

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=1 ; i<=n ; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        } 
    }

    fclose(fptr);
    return 0;
}

// Code not working