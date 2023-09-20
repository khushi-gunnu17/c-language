#include <stdio.h>

int main() {
    long long int fact = 1;
    int n;
    printf("Print the number : ");
    scanf("%d", &n);

    for(int i=1 ; i<=n; i++) {
        fact *= i;
    }
    printf("the factorial of the number is = %d", fact);

    return 0;
}