#include <stdio.h>

float convertTemp(float celsius);

int main() {
    float n;
    printf("Enter the celsius = ");
    scanf("%f", &n);

    printf("the value in fahrenheit is = ");
    convertTemp(n);
    return 0;
}

float convertTemp(float celsius) {
    float c = celsius;
    float f = (c * (9.0/5.0)) + 32;
    printf("%f", f);
    return 1;
}