//Details
	/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Description: water bill calculator
*/

#include<stdio.h>

int main() {
    int units;
    float bill;
    
    // prompt to the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    // calculate bill
    if(units <= 30) {
        bill = units * 20;
    }
    else if(units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    }
    else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }
    
    // print result
    printf("Total water bill: %.2f KES\n", bill);
    
    return 0;
}