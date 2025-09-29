/*
Name:Duncan mugambi
Reg no.CT101/G/26547
Date: 12th sept
Description: Loan eligibility
*/

#include <stdio.h>
    int main(){
        int age;
        float income;
        
       //user inputs
       
     printf("Please enter your age \n");
     scanf("%d", & age);
     
     printf("please enter your income \n");
     scanf("%f" , & income);
         
     //Eligibility check
      if(age>=21 && income >=21000){
          printf("Congratulations you qualify for the loan");}
           else{
               printf("Unfortunately we are unable to offer you a loan at this time . \n ");
           }
           
           return 0;
    }
               
               
