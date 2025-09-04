// WAP IN C TO CALCULATE AVERAGE OF FIRST N NUMBERS //
#include<stdio.h>
void main(){
	int n,i;
	float sum=0,ave=0;
	
	printf("ENTER SIZE OF ARRAY :: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("-----------------------------------\n");
	printf("ENTER ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("-----------------------------------\n");
	printf("ENTERED ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTERED %d ELEMENT :: %d\n",i,a[i]);
		sum+=a[i];
	}
	
	// LOGIC //
	ave = sum/n;
	
	// PRINTING AVERAGE //
	printf("AVERAGE OF ENTERED VALUES OF ARRAY :: %.2f",ave);
	
}
