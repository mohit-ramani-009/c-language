#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf
main()
{
	int first_number,last_number,n,sum=0;

	clrscr();

	m("Enter any number:");
	d("%d",&n);

	for(first_number=n; first_number>=10; first_number=first_number/10)
	{
		last_number=n%10;
	}
		sum=first_number+last_number;

		m("sum of first_number and last_number=%d\n",sum);

	getch();

}
