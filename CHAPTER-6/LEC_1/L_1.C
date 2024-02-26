#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{
	int n,i;
	clrscr();

	i=1;

	m("enter n:");
	d("%d",&n);

	while(i<=n)
	{
		m("%d ",i);
		i++;
	}

	getch();
}