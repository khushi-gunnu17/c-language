// Write a function to count the occurence of vowels in a string.

#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for(int i =0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++; 
        }
    }
    return count;
}

int main() {
    char str[100] = "Hello World";
    int count = countVowels(str);
    printf("%d", count);
    return 0;
}