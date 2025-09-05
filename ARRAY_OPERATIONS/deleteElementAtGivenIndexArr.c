// Write a program to delete a number from a given location in an array //
#include<stdio.h>
void main(){
	
	int n,i,pos;
	
	printf("ENTER ARRAY SIZE :: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("ENTER ARRAY ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("ENTER POSITION OF ELEMENT TO BE DELETED :: ");
	scanf("%d",&pos);
	
	// LOGIC //
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	
	printf("FINAL ARRAY :: \n");
	for(i=0;i<n;i++){
		printf("%d ELEMENT :: %d\n",i,a[i]);
	}
}
