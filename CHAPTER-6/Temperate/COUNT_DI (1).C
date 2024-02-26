#include<stdio.h>
#include<conio.h>
#define m printf
#define d scanf

 main()
 {
	int i,number;

	clrscr();

	m("enter a number:");
	d("%d",&number);

	i=0;

	while(number!=0)
	{
		number /=10;
		i++;
	}

	m("%d\n",i);



	getch();
 }






