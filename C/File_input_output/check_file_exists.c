// BEST PRACTICE 
// Check if a file exists before reading from it.

#include <stdio.h>

int main() {
    // Opening a file.
    FILE *fptr;
    // fptr = fopen("filename", mode);         //mode = read or write
    fptr = fopen("NewNewTest.txt", "r"); 
    if(fptr == NULL) {
        printf("file doesn't exist.");
    } else {
        fclose(fptr);
    }

    return 0;
}