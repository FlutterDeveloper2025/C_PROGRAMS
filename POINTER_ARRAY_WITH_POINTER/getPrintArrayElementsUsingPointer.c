// WAP IN C TO PRINT ARRAY ELEMENTS USING POINTER //
#include<stdio.h>
void main(){
	int i,n;
	
	printf("ENTER SIZE OF ARRAY :: ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr = a;
	
	printf("----------------------------------\n");
	printf("ENTER ARRAY ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER ELEMENT %d :: ",i);
		scanf("%d",ptr+i);
	}
	
	printf("\n----------------------------------\n");
	printf("ENTERED ARRAY ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTERED %d ELEMENT :: %d\n",i,*(ptr+i));
	}
}
