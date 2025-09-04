// WAP IN C TO CONVERT SECONDS TO HOURS MINUTES AND SECONDS //
#include<stdio.h>
void main(){
	int sec;
	
	printf("ENTER SECONS :: ");
	scanf("%d",&sec);
	
	// CONVERSION //
	int hours = sec/3600;
	int min = (sec%3600)/60;
	int seconds = sec%60;
	
	printf("Hours :: %d\n",hours);
	printf("Minutes :: %d\n",min);
	printf("Seconds :: %d\n",seconds);
}
