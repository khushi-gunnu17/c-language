// Find the salted form of a password entered by the user if the salt is "123" and added at the end.

#include <stdio.h>
#include <string.h>

void salting(char password[]) {
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword, password);
    strcat(newPassword, salt);
    puts(newPassword);
}

int main() {
    char password[100];
    scanf("%s", password);
    salting(password);

    return 0;
}