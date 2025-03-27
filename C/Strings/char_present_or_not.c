// Check if a given character is present in a string or not.

#include <stdio.h>

void isCharPresent(char str[], char ch) {
    for(int i=0 ; str[i]!= 0 ; i++) {
        if(str[i] == ch) {
            printf("Character is present.");
            return;
        }
    }
    printf("Character is NOT present.");
}

int main() {
    char str[100] = "khushi";
    isCharPresent(str, 'h');
    return 0;
}

