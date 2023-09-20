#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    printf("character is digit or not = %d", ch<=9 && ch>=0);
    //  0 --> false
    //  1 --> true

    return 0;
}