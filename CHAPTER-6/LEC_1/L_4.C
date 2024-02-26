#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{
	int i,n;
	clrscr();

	m("enter the first number:");
	d("%d",&i);

	m("enter the second number:");
	d("%d",&n);

	while(i<=n)
	{
	if ((i%4==0 && i % 100 !=0)|| (i % 400 == 0))
	{
		m("%d ",i);
	}
		i++;
	}

	getch();
}