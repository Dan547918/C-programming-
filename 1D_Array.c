/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: Hotel management system using arrays
*/
#include <stdio.h>/*
name paul sinyati lekasuiyan
reg no:PA106/G/28929/25
1D array

*/

# include <stdio.h>

int main(){
	int i,sum=0,avarage;
	// declare and initialize
	int revenue [7]={200,500,400,700,900,300,600};
	
	//print values
	 for(i=0;i<7;i++){
	     printf("%d\n",revenue[i]);
	     sum=sum+revenue[i];
	     avarage=sum/7;
		 };
		 
		printf("sum=%d\n",sum);
		printf("avarage=%d",avarage);
	 
	 
	
	
	
	
	
	
	
	
	
	return 0;
}
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, k;

    //1D ARRAY – WEEKLY REVENUE tracker
    
    float revenue[7];
    float totalRevenue = 0, avgRevenue;

    printf("Weekly Revenue Tracker \n");
    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
        
    }

    avgRevenue = totalRevenue / 7.0;

    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", avgRevenue);

    // 2D ARRAY – ROOM OCCUPANCY (ONE branch)
    
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); // seed random numbers

    printf("=== Room Occupancy for One Branch ===\n");
    for (i = 0; i < 5; i++) { // 5 floors
        occupied = 0;
        vacant = 0;
        for (j = 0; j < 10; j++) { // 10 rooms per floor
            occupancy[i][j] = rand() % 2; // random 0 or 1
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupied, vacant);
    }

    // ===================== 3D ARRAY – MULTIPLE BRANCHES 
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms
    int totalOccupied = 0;

    printf("\n=== Room Occupancy Across All Branches ===\n");
    for (i = 0; i < 3; i++) { // branches
        int branchOccupied = 0;
        for (j = 0; j < 5; j++) { // floors
            for (k = 0; k < 10; k++) { // rooms
                chain[i][j][k] = rand() % 2; // random 0 or 1
                if (chain[i][j][k] == 1)
                    branchOccupied++;
            }
        }
        printf("Branch %d -> Occupied Rooms: %d\n", i + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}