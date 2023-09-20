// A character array terminated by a null character '\0'.
// null character denotes string termination. 

// gets(str) --> input a string even multiword.   (dangerous and outdated)
// puts(str) --> output a string
// fgets(str, n, file) --> stops when n-1 chars input or new line is entered.

#include <stdio.h>

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0' ; i++) {
        printf("%c\t", arr[i]);
    }
    printf("\n");
}

int main() {
    char firstNmae[] = {'k', 'h', 'u', 's', 'h', 'i', '\0'};
    char lastName[] = "Sharma";
    char fname[] = "Khushi Sharma";

    printString(firstNmae);
    printf("\n");
    printString(lastName);

    char name[40];
    printf("Enter your name = ");
    scanf("%s\n", name);      // name is an array which is a pointer, so it doesn't need to be written with an ampersand.
    printf("Your name is %s\n", name);

    // Scanf cannot input multi word strings with spaces.
    // Here, gets() and puts() come into picture.   

    // char str[100];
    // gets(str);
    // puts(str);

    // string --> array --> pointer .
    // string using pointers.

    char *str = "Hello world\n";
    // store string in the memory and the assigned address is stored in the char pointer 'str'.
    puts(str);
    str = "Hello\n"; // Can be reinitialized
    puts(str);


    // char str[] = "Hello world\n"; // Cannot be reinitialized

    return 0;
}

// String Format Specifier = "%s";
