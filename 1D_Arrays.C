/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: Hotel management system using arrays
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