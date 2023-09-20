// 2 bacho ke 3 subjects ke marks store karane hai 

#include <stdio.h>

int main() {

    int rows, cols;
    printf("\nEnter the no. of rows = ");
    scanf("%d", &rows);

    printf("\nEnter the no. of cols = ");
    scanf("%d", &cols);

    int marks[rows][cols];

    // Input
    printf("Enter the values in the array : ");
    for(int i=0 ; i<rows ; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Output
    printf("Printing the values in the array : ");
    for(int i=0 ; i<rows ; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d\t", marks[i][j]);            // correction needed
        }
    }
    return 0;
}