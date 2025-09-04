// WAP IN C TO DISPLAY N NUMBER OF ELEMENTS
// USING AN ARRAY 

#include<stdio.h>
void main(){
	
	int n,i;
	
	printf("ENTER ARRAY SIZE :: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n-----------------------------\n");
	printf("ENTER %d ELEMENTS :: \n",n);
	for(i=0;i<n;i++){
		printf("ENTER ELEMENT %d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n-----------------------------\n");
	printf("ENTERED ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ELEMENT %d : %d\n",i,a[i]);
	}
}
