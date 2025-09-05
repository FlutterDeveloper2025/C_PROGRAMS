// Write a program to insert and delete a number in an array that is already sorted
// in an ascending order

#include<stdio.h>
void main(){
	
	int i,n,j,ele,pos,del;
	printf("ENTER SIZE OF ARRAY :: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("--------------------------\n");
	printf("ENTER ARRAY ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	// SORTING LOGIC //
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("SORTED ARRAY :: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	// INSERTION LOGIC //
	printf("\nENTER ELEMENT TO BE INSERTED :: ");
	scanf("%d",&ele);
	printf("ENTER POSITION FOR THE ELEMENT TO BE INSERTED :: ");
	scanf("%d",&pos);
	
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=ele;
	n++;
	
	printf("ARRAY AFTER INSERTION:: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	// DELETION LOGIC //
	printf("\nENTER POSITION OF THE ELEMENT TO BE DELETED :: ");
	scanf("%d",&del);
	
	for(i=del-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	
	printf("ARRAY AFTER DELETION:: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
