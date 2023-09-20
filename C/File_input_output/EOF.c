// End Of File (EOF)
// fgetc returns EOF to show that the file has ended.

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    char ch = fgetc(fptr);

    while(ch != EOF) {
        printf("%c", ch);
        char ch = fgetc(fptr);
    }

    // for(int i = ch; ch<EOF; ch++) {
    //     printf("%c", ch);
    //     char ch = fgetc(fptr);
    // } 
    printf("\n");

    fclose(fptr);
    return 0;
}

// Code not working
