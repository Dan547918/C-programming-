/*
Name:Duncan mugambi
Reg no.CT101G/ 26547
Date: 12th sept
Description: Loan eligibility
*/

#include <stdio.h>
#define PI  3.14159
int main(){
    float radius,height,volume,surfacearea;
    
     //prompt user input
     
     printf ("Enter the radius of the cylinder");
     scanf ("%f" , &radius);
     printf ("Enter the height of the cylinder");
     scanf ("%f" , &height);
     
    //working formulae
    
    volume = PI *radius *radius *height;
    surfacearea= 2* PI *radius * radius + 2 *PI * radius *height;
    
    //the output
    
    printf("volume of the cylinder = %.2f \n", volume);
     printf("surfacearea of the cylinder = %.2f \n",surfacearea);
     
return 0;
}