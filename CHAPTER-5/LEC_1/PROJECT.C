#include<stdio.h>
#include<conio.h>
main()
{
	int num;

	clrscr();

	printf("enter num=");
	scanf("%d",&num);

	if (num>0)
	{
		printf("this number is positive...");
	}

	else if(num<0)
	{
		printf("this number is nagative...");
	}

	else
	{
		printf("this number is neutral...");
	}

	getch();
}