// Standard Library Functions
// <string.h>

/*
1. strlen(str) = Count number of characters excluding '\0*. 
2. strcpy(newStr, oldStr) = copies value of old string to new string.
3. strcat(firstStr, secStr) = conacatenates first string with second string.
4. strcmp(firstStr, secStr) = compares 2 strings and returns a value.
        // o--> string equal
        // +ve --> first > second , depends on (ASCII) value  // Banana > Appla  B - A = 66 -65 = +!        // -ve --> second > first (ASCII)
*/

#include <stdio.h>
#include <string.h>

int main() {

    char name[100] = "khushi";
    printf("the length of your name is = %d\n", strlen(name));

    char oldStr[] = " oldStr";
    char newStr[] = " newStr";
    
    // strcpy(newStr, oldStr);
    // puts(newStr);

    // strcat(newStr, oldStr);         //newStr should have the capacity to store the concatenated value.
    // puts(newStr);

    printf("Comparison = ");
    printf("%d", strcmp(newStr, oldStr));

    return 0;
}