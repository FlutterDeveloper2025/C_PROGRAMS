#include<stdio.h>
void areaCircle(int);
void oddOrEven(int);
void vowelOrNot(char);
void largestFromThree(int,int,int);
void leapyearOrNort(int);
void secToSecMinHour(int);
void dayToDayWeekYear(int);

// --------------------------------------------------------------- //
// FUNCTION 1 :: AREA OF CIRCLE //
void areaOfCircle(int r){
	float pi = 3.14;
	float area = pi * r * r;
	printf("=============================================\n");
	printf("AREA OF CIRCLE WITH %d RADIUS :: %.2f\n",r,area);
	printf("=============================================\n");
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
// FUNCTION 2 :: ODD OR EVEN //
void oddOrEven(int num){
	if(num%2==0){
		printf("==================\n");
		printf("%d IS EVEN\n",num);
		printf("==================\n");
	}else{
		printf("==================\n");
		printf("%d IS ODD\n",num);
		printf("==================\n");
	}
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
//  FUNCTION 3 :: VOWEL OR CONSONANT //
void vowelOrNot(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||
	c=='E'||c=='I'||c=='O'||c=='U'){
		printf("\n===============");
		printf("\n%c IS A VOWEL",c);
		printf("\n===============");
	}else{
		printf("\n===============");
		printf("\n%c IS A CONSONANT",c);
		printf("\n===============");
	}
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
// FUNCTION 4 :: LARGEST FROM THREE NUMBERS //
void largestFromThree(int a,int b,int c){
	int	largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("\n=================================================");	
	printf("\nLARGEST ELEMENT FROM %d , %d , %d :: %d",a,b,c,largest);
	printf("\n=================================================");
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
// FUNCTION 5 :: LEAP YEAR OR NOT //
void leapyearOrNort(int year){
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    	printf("\n====================");
		printf("\n%d IS A LEAP YEAR",year);
		printf("\n====================");
	}else{
		printf("\n========================");
		printf("\n%d IS NOT A LEAP YEAR",year);
		printf("\n========================");
	}
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
// FUNCTION 6 :: CONVERT SECONDS TO SECONDS MINUTES AND HOUR //
void secToSecMinHour(int sec){
	int hours = sec/3600;
	int min = (sec%3600)/60;
	int seconds = sec%60;
	
	printf("\n========================");
	printf("\nHours :: %d",hours);
	printf("\nMinutes :: %d",min);
	printf("\nSeconds :: %d",seconds);
	printf("\n========================");
}
// --------------------------------------------------------------- //

// --------------------------------------------------------------- //
// FUNCTION 7 :: CONVERT DAY TO DAYS WEEK AND YEAR //
void dayToDayWeekYear(int total_days){
	int years = total_days / 365;               // Approximate year as 365 days
    int months = (total_days % 365) / 30;      // Approximate month as 30 days
    int days = (total_days % 365) % 30;
    
    printf("\n=========================================================");
    printf("\n%d days is approximately %d years, %d months, and %d days", total_days, years, months, days);
    printf("\n=========================================================");
}

// --------------------------------------------------------------- //
void main(){
	int ch,r,num,a,b,c,year,sec,total_days;
	char d;
	do{
		printf("\nENTER 0 FOR EXIT :: ");
		printf("\nENTER 1 FOR AREA OF CIRCLE :: ");
		printf("\nENTER 2 FOR ODD OR EVEN :: ");
		printf("\nENTER 3 FOR FINDING VOWEL OR NOT :: ");
		printf("\nENTER 4 FOR FINDING LARGEST FROM THREE NUMBERS :: ");
		printf("\nENTER 5 FOR CHECKING THE ENTERED YEAR IS LEAP YEAR OR NOT :: ");
		printf("\nENTER 6 FOR CONVERSION OF SECONDS TO SECONDS MINUTES AND HOUR :: ");
		printf("\nENTER 7 FOR CONVERSION OF DAY TO DAYS WEEK AND YEAR :: ");
		printf("\nENTER CHOICE :: ");
		scanf("%d",&ch);
		switch(ch){
			case 0:
				exit(0);
			case 1 :
				printf("ENTER RADIUS :: ");
				scanf("%d",&r);
				areaOfCircle(r);
				break;
			case 2 :
				printf("ENTER A NUMBER :: ");
				scanf("%d",&num);
				oddOrEven(num);
				break;
			case 3 :
				printf("ENTER A CHARACTER :: ");
				scanf(" %c",&d);
				vowelOrNot(d);
				break;
			case 4 :
				printf("ENTER THREE NUMBERS :: \n");
				scanf("%d%d%d",&a,&b,&c);
				largestFromThree(a,b,c);
				break;
			case 5 :
				printf("ENTER YEAR :: ");
				scanf("%d",&year);
				leapyearOrNort(year);
				break;
			case 6 :
				printf("ENTER SECONDS ::");
				scanf("%d",&sec);
				secToSecMinHour(sec);
			case 7 :
				printf("ENTER TOTAL DAYS :: ");
				scanf("%d",&total_days);
				dayToDayWeekYear(total_days);
				break;
		}
	}while(1);
}
