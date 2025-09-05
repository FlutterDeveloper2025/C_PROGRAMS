// WAP IN C TO MERGE TWO UNSORTED ARRAYS //
#include<stdio.h>
void main(){
	
	int i,n1,n2;
	printf("ENTER SIZE OF ARRAY-1 :: ");
	scanf("%d",&n1);

	printf("ENTER SIZE OF ARRAY-2 :: ");
	scanf("%d",&n2);
		
	int a[n1],b[n2];
	
	printf("--------------------------\n");
	printf("ENTER ARRAY-1 ELEMENTS :: \n");
	for(i=0;i<n1;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--------------------------\n");
	printf("ENTER ARRAY-2 ELEMENTS :: \n");
	for(i=0;i<n2;i++){
		printf("ENTER %d ELEMENT :: ",i);
		scanf("%d",&b[i]);
	}
	
	
	// LOGIC //
    for (i = 0; i < n2; i++) {
        a[n1 + i] = b[i];
    }
	
	int n3=n1+n2;
	
	printf("Merged array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", a[i]);
    }
}
