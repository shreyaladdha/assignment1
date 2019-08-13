#include<stdio.h>
#include<conio.h>
void main()
{
	struct stud
	{
		char ID[20];
		int age;
		int marks;
	}s1;
	clrscr();
	printf("enter the student ID");
	scanf("%s",s1.ID);
	printf("enter student age");
	scanf("%d",&s1.age);
	printf("Enter marks secured");
	scanf("%d",&s1.marks);
	if(s1.age>=20)
	{
		if((s1.marks>=0)&&(s1.marks<=100))
		{
			if(s1.marks>=65)
			printf("student qualifies for admission");
			else
			printf("student does not qualifies for admission");
		}
		else
		printf("data invalid");
	}
	else
	printf("data invalid");
	getch();
}