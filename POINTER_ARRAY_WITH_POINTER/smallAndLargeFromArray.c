// WAP IN C TO FIND SMALLEST AND LARGEST NUMBER FROM N-SIZED ARRAY //
#include<stdio.h>
void main(){
	int i,n;
	
	printf("ENTER ARRAY SIZE :: ");
	scanf("%d",&n);
	
	int a[n];
	
	
	printf("---------------------------\n");
	printf("ENTER ELEMENTS :: \n");
	for(i=0;i<n;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	int max=a[0];
	
	// LOGIC //
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			i++;
		}if(a[i]>max){
			max=a[i];	
		}
		
	}
	
	printf("\n------------------------\n");
	printf("MINIMUM VALUE :: %d\n",min);
	printf("MAXIMUM VALUE :: %d",max);
	printf("\n------------------------\n");
}
