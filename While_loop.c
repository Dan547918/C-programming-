/*
Name : Duncan Mugambi Gitonga
Reg no: CT101/G/26547/25
Description: using while loop to guess secret number
*/
#include <stdio.h>

int main() {
//variable declaration 
    float balance, amount;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);

        balance =balance-amount;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Insufficient balance.\n");
    }

    return 0;
}



    