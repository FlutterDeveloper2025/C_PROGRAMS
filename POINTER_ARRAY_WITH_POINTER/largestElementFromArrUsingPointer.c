// WAP to find the largest element in the array using Pointer //
#include<stdio.h>
void main(){
	int i,n;
	
	printf("ENTER ARRAY SIZE :: ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr=a;
	
	printf("ENTER ARRAY ELEMENTS ::\n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",ptr+i);
	}
	
	int max=a[0];
	
	// LOGIC //
	for(i=0;i<n;i++){
		if(max<*(ptr+i)){
			max=*(ptr+i);
		}
	}
	
	printf("MAXIMUM VALUE :: %d",max);
}
