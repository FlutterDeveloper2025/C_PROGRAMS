// WAP IN C TO FIND WHETHER THE ENTERED 
// NUMBER IS ODD OR EVEN
#include<stdio.h>
void main(){
	int n;
	
	printf("ENTER A NUMBER HERE :: ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("%d IS EVEN",n);
	}else{
		printf("%d IS ODD",n);
	}
}
