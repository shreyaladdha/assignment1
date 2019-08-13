#include<stdio.h>
#include<conio.h>
void main()
{
	struct stud
	{
		char ID[20];
		int age;
		int marks;
	}s1;  //structure variable
	clrscr();
	printf("Enter the student ID");
	scanf("%s",s1.ID); //accepting student id
	printf("Enter student age");
	scanf("%d",&s1.age); //accepting student age
	printf("Enter marks secured");
	scanf("%d",&s1.marks);//accepting student marks
	if(s1.age>=20) //checking for criteria
	{
		if((s1.marks>=0)&&(s1.marks<=100))
		{
			if(s1.marks>=65)
			printf("student qualifies for admission");//student if admitted
			else
			printf("student does not qualifies for admission");
		}
		else
		printf("data invalid"); //if invalid data
	}
	else
	printf("data invalid");
	getch();
}