/*
Name : Duncan Mugambi Gitonga
Reg no: CT101/G/26547/25
Description: using while loop to guess secret number
*/
#include <stdio.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted!\n");

    return 0;
}