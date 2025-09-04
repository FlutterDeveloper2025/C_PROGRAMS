// WAP IN C TO REVERSE A NUMBER //
#include<stdio.h>
void main(){
	int n,i,rev=0,rem;
	
	printf("ENTER A NUMBER HERE :: ");
	scanf("%d",&n);
	
	while(n!=0){
		rem = n %10;
		rev = rev * 10+rem;
		n = n/10;
	}
	
	printf("REVERSED NUMBER :: %d",rev);
}
