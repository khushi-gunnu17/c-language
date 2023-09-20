#include <stdio.h>

int sum(int n);

int main() {
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    printf("%d", sum(x));

    return 0;
}

int sum(int n) {
    if(n==1) {          // base condition
        return 1;
    }

    return sum(n-1) + n;

    // int sumNm1 = sum(n-1);
    // int sumN = sumNm1 + n;
    // return sumN;

}