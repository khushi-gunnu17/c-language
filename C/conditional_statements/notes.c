#include <stdio.h>

int main() {
    int day;
    printf("Enter day(1-7) : ");
    scanf("%d", &day);

    switch (day) {
        case 1 : printf("It's monday.");
                    break;

        case 2 : printf("It's tuesday.");
                    break;

        case 3 : printf("It's wednesday.");
                    break;

        case 4 : printf("It's thursday.");
                    break;

        case 5 : printf("It's friday.");
                    break;

        case 6 : printf("It's saturday.");
                    break;

        case 7 : printf("It's sunday.");
                    break;

        default : printf("invalid day.");
    }
    return 0;
}