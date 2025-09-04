// WAP IN C TO CALCULATE AREA OF CIRCLE //
#include<stdio.h>
void main(){
	float pi = 3.14,r,area;
	
	printf("ENTER RADIUS OF CIRCLE :: ");
	scanf("%f",&r);
	
	// LOGIC //
	area = pi * r * r;
	
	printf("AREA OF CIRCLE IS %f",area);
}
