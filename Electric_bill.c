/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: function to electric bill
*/

#include <stdio.h>

//function prototype
int multiplication(int units,int ksh);

int main(){
int result,result_1,result_2;
//function call	
result =multiplication(100,10);
result_1=multiplication(100,15);
result_2=multiplication(200,20);

printf("total bill=%d\n",result);
printf("total bill=%d\n",result_1);
printf("total bill=%d\n",result_2);

}
//function declaration
int multiplication(int units,int ksh){
	int multiplication;
	
	multiplication= units * ksh;
	
	return multiplication;
}