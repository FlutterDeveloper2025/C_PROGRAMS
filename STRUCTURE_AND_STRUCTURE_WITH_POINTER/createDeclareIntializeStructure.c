// WAP IN C TO CREATE,DECLARE AND INTIALIZE STRUCTURE //
#include<stdio.h>

// CREATING STRUCTURE //
struct Employee{
	int id;
	char name[50];
	float salary;
};

int main(){
	struct Employee emp;
	
	printf("------------------------------\n");
	printf("ENTER EMPLOYEE ID :: ");
	scanf("%d",&emp.id);	
	printf("ENTER EMPLOYEE NAME :: ");
	scanf("%s",&emp.name);	
	printf("ENTER EMPLOYEE SALARY :: ");
	scanf("%f",&emp.salary);
	
	printf("------------------------------\n");
	printf("EMPLOYEE ID :: %d\n",emp.id);	
	printf("EMPLOYEE NAME :: %s\n",emp.name);
	printf("EMPLOYEE SALARY :: %.2f",emp.salary);
	printf("\n------------------------------\n");
}
