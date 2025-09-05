// Write a program to find whether the array contains a 
// duplicate number or not//
#include<stdio.h>
void main(){
	
	int i,n,j,flag=0;
	
	printf("ENTER SIZE OF ARRAY :: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("ENTER ARRAY ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	// LOGIC //
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]){
			flag=1;
			break;
		}
	}
	
	if(flag==1){
		printf("DUPLICATE VALUE FOUND");
	}else{
		printf("DUPLICATE VALUE NOT FOUND");
	}
}
