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

	m("Odd numbers from %d to 1 are:",i);

	while(i>=1)
	{
	if (i%2!=0)
	{
		m("%d ",i);
	}
		i--;
	}

	getch();
}