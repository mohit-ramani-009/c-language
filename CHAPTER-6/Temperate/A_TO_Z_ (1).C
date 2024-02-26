#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

main()
{
	char ch='a';

	clrscr();

	do
	{
		m("%c ",ch);
		ch+=4;
	}

	while (ch<='z');

	getch();

}