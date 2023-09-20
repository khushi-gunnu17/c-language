#include <stdio.h>

void slice(char str[], int n, int m) {  // n and m are valid values
    char newStr[100];
    int j = 0;
    for(int i = n; i<=m; i++, j++) {
        newStr[j] = str[i]; 
    }
    newStr[j] = '\0';
    puts(newStr);
}

int main() {
    char str[100] = "Hello World";
    slice(str, 3, 6);
    return 0;
}