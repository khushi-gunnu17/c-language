#include <stdio.h>

int main() {
    
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w");

    
    // Writing to a file 
    // char ch = 'A';
    // fprintf(fptr, "%c", ch);

    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'P');
    // fprintf(fptr, "%c", 'P');
    // fprintf(fptr, "%c", 'L');
    // fprintf(fptr, "%c", 'E');

    fputc('K', fptr);
    fputc('I', fptr);
    fputc('W', fptr);
    fputc('I', fptr);

    fclose(fptr);

    return 0;
}

// Read And Write a char
/*
fgetc(fptr);    // To read
fputc('A', fptr);    // To write
*/