#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf
main()
{
	float unit,first,total_bill,a;
	clrscr();

	m("enter the unit:");
	d("%f",&unit);

	if (unit<=50)
	{
		first=unit*0.50;
	}
	else if(unit<=150)
	{
		first=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		first=100+(unit-150)*1.20;
	}
	else
	{
		first=220+(unit-250)*1.50;
	}

	a=first*.20;
	total_bill=a+first;

	m("electricity bill is=Rs%.2f",total_bill);

	getch();
}