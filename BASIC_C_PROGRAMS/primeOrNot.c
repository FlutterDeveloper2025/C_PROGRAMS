// WAP IN C TO FIND WHETHER THE ENTERED NUMBER
// IS PRIME OR NOT 
#include<stdio.h>
void main(){
	int i,n,flag=0;
	
	printf("ENTER A NUMBER HERE ::");
	scanf("%d",&n);
	
	if(n==1){
		printf("ENTER A NUMBER GREATER THEN 1");
	}else{
		for(i=2;i<=n;i++){
			if(n%i==0){
				flag++;
				if(flag>1){
					break;
				}
			}
		}
		
		if(flag==1){
			printf("PRIME");	
		}else{
			printf("NOT PRIME");
		}
	}
	
	
}
