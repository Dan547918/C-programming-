/*
Name :Duncan Mugambi gitonga
Reg No.CT101/G/26548/25
Description :3D array - multiple branches management
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room, totalOccupied = 0;

    srand(time(NULL)); // Seed for randomness

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}