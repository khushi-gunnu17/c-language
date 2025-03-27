// Write a program to print the name of the user and store its length.

#include <stdio.h>

int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0' ; i++) {
        count++;
    }
    printf("The length is = %d\n", count-1);          // or return count - 1;
}

int main() {

    char name[100];
    printf("Enter your name = ");
    fgets(name, 100, stdin);
    
    countLength(name);

    // Take a string input from the user using %c.
    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    
    str[i] = '\0';      // Null character doesn't automatically get added in %c
    puts(str);
    return 0;
}