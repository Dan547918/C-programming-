/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: Daily sales analysis
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    float amount, total = 0.0;

    // Open the file for reading
    fptr = fopen("/storage/emulated/0/Cxxdroid/files/sales.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file! Make sure sales.txt exists.\n");
        return 1;
    }

    printf("Reading sales transactions...\n\n");

    // Read each amount and add to total
    while (fscanf(fptr, "%f", &amount) == 1) {
        printf("Transaction: %.2f\n", amount);
        total += amount;
    }

    printf("\n.  \n");
    printf("Total Sales for the Day: %.2f\n", total);
    printf("\n");

    fclose(fptr); // closing file properly
    printf("\nFile closed successfully.\n");

    return 0;
}