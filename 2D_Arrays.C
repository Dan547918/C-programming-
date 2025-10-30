/*
Name :Duncan mugambi gitonga
Reg No.CT101/G/26547/25
Description :2D Array _ room ocxupancy
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    // Simulate input (you can replace with scanf if needed)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Random 0 or 1
        }
    }

    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}