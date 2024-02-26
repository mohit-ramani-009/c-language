#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{
	int i;
	clrscr();

	m("enter i:");
	d("%d",&i);

	while(i>=1)
	{
		m("%d ",i);
		i--;
	}

	getch();
}