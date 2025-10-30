/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: function to calculate fare
*/
#include <stdio.h>
//function protptype
int multiplication(int km,int ksh);

int main(){
	int result,result_1,result_2;
	//function calling
	result=multiplication(20,50);
	result_1=multiplication(30,50);
	result_2=multiplication(40,50);
	
	printf("Total fare=%d\n",result);	
	printf("Total fare=%d\n",result_1);
    printf("Total fare=%d\n",result_2);
	
}
//function declaration
int multiplication(int km,int ksh){
	int multiplication;
	
	multiplication=km*ksh;
	return multiplication;
}