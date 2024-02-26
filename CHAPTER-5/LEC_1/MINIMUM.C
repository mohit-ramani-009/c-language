#include<stdio.h>
#include<conio.h>
main()
{
	int num1;
	int num2;
	clrscr();
	printf("enter num1=");
	scanf("%d",&num1);
	printf("enter num2=");
	scanf("%d",&num2);
	if (num1<=num2)
	{
		printf("minimum num %d\n",num1);
	}
	else
	{
		printf("minimum num %d\n",num2);
	}
	getch();
}