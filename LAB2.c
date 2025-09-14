#include<stdio.h>
void factorial(int);
void Recursionfactorial(int);
unsigned long long  factorialHelper(int);
void powerNum(int,int);
void revNumber(int);
void factors(int);
void prime(int);
void Prime();
void armstrong(int);
// ------------------------------------------------- //
// FUNCTION 1 :: FACTORIAL OF NUMBER [LOOP] //
void factorial(int a){
	int i;
	unsigned long long fact = 1;
	for(i=1;i<=a;i++){
		fact*=i;
	}
	printf("\n====================");
	printf("\nFACTORIAL OF %d :: %d",a,fact);
	printf("\n====================");
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 2 :: FACTORIAL OF NUMBER [RECURSION] //
unsigned long long factorialHelper(int b) {
    if (b == 0 || b == 1)
        return 1;
    else
        return b * factorialHelper(b - 1);
}
void factorialRecursion(int b) {
    unsigned long long result = factorialHelper(b);
    printf("\n======================================");
	printf("\nFactorial of %d (using recursion) = %llu", b, result);
	printf("\n======================================");   
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 3 :: FINDING NUMBER RAISED TO ITS POWER //
void powerNum(int ele,int pow){
	int r=1,i;
	for(i=1;i<=pow;i++){
		r *= ele;
	}
	printf("\n=================");
	printf("\n%d RAISE TO %d :: %d",ele,pow,r);
	printf("\n=================");
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 4 :: REVERSE A NUMBER //
void revNumber(int num){
	int rev=0,rem,ornum = num;
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("\n=====================");
	printf("\nREVERSE OF %d :: %d",ornum,rev);
	printf("\n=====================");
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 5 :: FACTORS OF A NUMBER //
void factors(int n){
	int i;
	printf("\n=======================");
	printf("\nFACTORS OF %d :: ",n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
	printf("\n=======================");
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 6 :: PRIME NUMBER //
void prime(int h){
	int flag=0,i;
	if(h==1){
		printf("ENTER A NUMBER GREATER THEN 1");
	}else{
		for(i=2;i<=h;i++){
			if(h%i==0){
				flag++;
				if(flag>1){
					break;
				}
			}
		}
		
		if(flag==1){
			printf("\n==============");
			printf("\n%d IS PRIME",h);
			printf("\n==============");	
		}else{
			printf("\n==============");
			printf("\nNOT PRIME");
			printf("\n==============");
		}
	}
}
// ------------------------------------------------- //

// ------------------------------------------------- //
// FUNCTION 7 :: PRIME NUMBER BETWEEN GIVEN RANGE //
int isPrime(int p){
	int i;
	if(p<=1){
		return 0;
	}
    int limit = (int)sqrt(p);
    for (i = 2; i <= limit; i++) {
        if (p % i == 0){
            return 0;
    	}
    	return 1;	
	}
}
// ------------------------------------------------- //

void armstrong(int number){
	int originalNum = number ,sum = 0, n = 0;
    // Count digits
    int temp = number;
    while (temp != 0) {
        n++;
        temp /= 10;
    }
    // Calculate sum of digits raised to power n
    temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, n);
        temp /= 10;
    }
    
    if(sum==originalNum){
    	printf("\n=======================");
    	printf("\n%d IS ARMSTRONG NUMBER",number);
    	printf("\n=======================");
	}
}


void sumOfNNumbers(int r){
	int totalSum = 0,i;
	for (i = 1; i <= r; i++) {
        // sum of first i natural numbers
        int partialSum = i * (i + 1) / 2;
        totalSum += partialSum;
    }
    printf("Sum of the series is: %d\n", totalSum);
}
void main(){
	int a,b,ch,i,ele,pow,num,n,h,start,end,k,number,r;
	do{
		printf("\nENTER 0 FOR EXIT :: ");
		printf("\nENTER 1 FOR FACTORIAL OF NUMBER :: ");
		printf("\nENTER 2 FOR FACTORIAL OF NUMBER[using recursion] :: ");
		printf("\nENTER 3 FOR FINDING ANY NUMBER RAISED TO ITS POWER :: ");
		printf("\nENTER 4 FOR REVERSING A NUMBER :: ");
		printf("\nENTER 5 FOR FINDING FACTORS OF A NUMBER :: ");
		printf("\nENTER 6 FOR FINDING WHETHER THE NUMBER IS PRIME OR NOT :: ");
		printf("\nENTER 7 FOR FINDING PRIME NUMBERS BETWEEN GIVEN RANGE :: ");
		printf("\nENTER 8 FOR FINDING WHETHER THE NUMBER IS ARMSTRONG OR NOT :: ");
		printf("\nENTER 9 FOR FINDING SUM OF 1 + (1+2) + (1+2+3) + (1+2+3+4)+ ...+(1+2+3+4+...+n) :: ");
		printf("\nENTER CHOICE :: ");
		scanf("%d",&ch);
		switch(ch){
			case 0 :
				exit(0);
			case 1 :
				printf("ENTER NUMBER :: ");
				scanf("%d",&a);
				factorial(a);
				break;
			case 2 :
				printf("ENTER NUMBER :: ");
				scanf("%d",&b);
				factorialRecursion(b);
				break;
			case 3 :
				printf("ENTER NUMBER :: ");
				scanf("%d",&ele);
				printf("ENTER POWER :: ");
				scanf("%d",&pow);
				powerNum(ele,pow);
				break;
			case 4 :
				printf("ENTER A NUMBER :: ");
				scanf("%d",&num);
				revNumber(num);
				break;
			case 5 :
				printf("ENTER A NUMBER :: ");
				scanf("%d",&n);
				factors(n);
				break;
			case 6 :
				printf("ENTER A NUMBER :: ");
				scanf("%d",&h);
				prime(h);
				break;
			case 7 :
				printf("ENTER STARTING RANGE :: ");
				scanf("%d",&start);
				printf("ENTER ENDING RANGE :: ");
				scanf("%d",&end);
				printf("\n=====================================");
				printf("\nPRIME NUMBERS :: ");
				for(k=start;k<=end;k++){
					if(isPrime(k)){
						printf("%d ",k);
					}
				}
				printf("\n=====================================");
				break;
			case 8 :
				printf("ENTER A NUMBER :: ");
				scanf("%d",&number);
				armstrong(number);
			case 9 :
				printf("ENTER SIZE :: ");
				scanf("%d",&r);
				sumOfNNumbers(r);
				break;
		}
	}while(1);
}
