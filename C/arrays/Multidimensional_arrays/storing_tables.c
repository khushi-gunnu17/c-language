// Storing the tables of 2 & 3.
#include <stdio.h>

// We need to store the second value in the multi array in the function as
// the first array is considered a pointer and need not be stored.

void storeTable(int arr[][10], int n, int number) {
    for(int i=0; i<10 ; i++) {
        arr[n][i] = number * (i+1); 
    }
}

void printTable(int arr[][10], int n) {
    for(int i=0; i<10 ; i++) {
        printf("%d\t", arr[n][i]);
    } printf("\n");
}

int main() {
    int tables[2][10];

    storeTable(tables, 0, 2);
    storeTable(tables, 1, 3);
    
    printTable(tables, 0);
    printTable(tables, 1);

    return 0;
}