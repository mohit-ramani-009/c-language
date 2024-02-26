#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	int c;

	clrscr();

	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	printf("enter c=");
	scanf("%d",&c);

	if (a==b && b==c)
	{
		printf("all value are same");
	}

	else if (a==b)
	{
		printf(" a and b are same");
	}

	 else if (a==c)
	{
		printf("a and c are same");
	}

	else if (b==c)
	{
		printf("b and c are same");
	}
	else
	{
		if (a<b)
		{
			if (a<c)
			{
				printf("a is minimum");
			}

			else
			{
				printf("c is minimum");
			}
		}

		else
		{
			if (b<c)
			{
				printf("b is minimum");
			}

			else
			{
				printf("c is minimum");
			}                              		}
	}



	getch();
}