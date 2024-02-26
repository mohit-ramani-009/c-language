#include<stdio.h>
#include<conio.h>
main()
{
	int num;

	clrscr();

	printf("enter num=");
	scanf("%d",&num);

	if (num%2==0)
	{
		printf("this number is an Even Number...");
	}

	else
	{
		printf("this number is an Odd Number...");
	}

	getch();
}