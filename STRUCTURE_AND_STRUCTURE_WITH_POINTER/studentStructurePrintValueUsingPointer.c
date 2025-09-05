// WAP to create a structure Student with fields: name, roll, and marks. Use a
// pointer to structure to assign values and print them //

#include<stdio.h>

struct Student{
	char name[50];
	int rollno;
	float marks;
};

int main(){
	struct Student std;
	struct Student *ptr;
	
	ptr=&std;
	
	printf("ENTER STUDENT DETAILS HERE :: \n");
	printf("ENTER STUDENT NAME :: ");
	scanf("%s",ptr->name);
	printf("ENTER STUDENT ROLL NUMBER :: ");
	scanf("%d",&ptr->rollno);
	printf("ENTER STUDENT MARKS :: ");
	scanf("%f",&ptr->marks);
	
	printf("--------------------------------------\n");
	printf("ENTERED STUDENT DETAILS :: \n");
	printf("STUDENT NAME :: %s\n",ptr->name);
	printf("STUDENT ROLL NUMBER :: %d\n",ptr->rollno);
	printf("STUDENT MARKS :: %.2f\n",ptr->marks);
	
}
