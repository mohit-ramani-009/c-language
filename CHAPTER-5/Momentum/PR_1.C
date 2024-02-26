#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{
	int num;

	clrscr();

	m("enter number:-");
	d("%d",&num);

	(num%2==0)

		?m("this number is an Even")
		:m("this number is an Odd");

	getch();
}