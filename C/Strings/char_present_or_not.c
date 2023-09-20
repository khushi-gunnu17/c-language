// Check if a given character is present in a string or not.

#include <stdio.h>

void isCharPresent(char str[], char ch) {
    for(int i=0 ; str[i]!= 0 ; i++) {
        if(str[i] == ch) {
            printf("Charcater is present.");
            return;
        }
    }
    printf("Charcater is NOT present.");
}

int main() {
    char str[100] = "khushi";
    isCharPresent(str, 'h');
    return 0;
}

