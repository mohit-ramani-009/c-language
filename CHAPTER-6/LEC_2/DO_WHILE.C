#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()

{

	int i;

	clrscr();

	i=1;

	do
	{
		m("%d\n",i);
		i++;
	}

	while(i<=10);


	getch();

}