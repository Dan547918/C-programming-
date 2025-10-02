/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Description:Program to show exam eligibility
*/

#include<stdio.h>
int main(){
	
	float  attendance,average_marks;
	
	//prompt user for input
	
	printf("Enter attendance percentage:");
	scanf("%f",&attendance);
	
	printf("Enter average marks:");
	scanf("%f",&average_marks);
	
	//exam eligibility check
	
	if(attendance>=75&&average_marks>=40){             printf ("Eligible for final exams \n");
	}else{                                                                  printf("Not eligible for the final exams");
	}
	
	return 0;
}

