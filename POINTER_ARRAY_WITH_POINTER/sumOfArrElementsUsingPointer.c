// WAP to calculate the sum of n numbers using Pointer //
#include<stdio.h>
void main(){
	int i,n,sum=0;
	
	printf("ENTER ARRAY SIZE :: ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr=a;
	
	printf("ENTER ARRAY ELEMENTS ::\n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",ptr+i);
		
		// LOGIC //
		sum+=*(ptr+i);
	}
	
	printf("%d",sum);
}
