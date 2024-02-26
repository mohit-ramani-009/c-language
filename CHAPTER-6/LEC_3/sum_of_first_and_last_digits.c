#include<stdio.h>
#include<conio.h>
main()
{
	int first_number,last_number,n,sum=0;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);

	for(first_number=n; first_number>=10; first_number=first_number/10)
	{
		last_number=n%10;
	}
		sum=first_number+last_number;
		printf("sum of first_number and last_number=%d\n",sum);
	getch();
	return 0;
}
