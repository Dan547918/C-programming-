/*
Name: Duncan mugambi gitonga
Reg No:CT101/G/26547/25
Description:program  for sale of data bundles
*/

#include <stdio.h>

int main(void) {
    int choice;

    // Display menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // user input prompt
    
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    //Display 2 bundle and cost.
    
    switch(choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
    }

    return 0;
}