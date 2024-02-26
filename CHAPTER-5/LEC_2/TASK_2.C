#include<stdio.h>
#include<conio.h>

main()

{

	int a;

	int b;

	int c;

	int d;

	clrscr();

	printf("enter a=");
	scanf("%d",&a);

	printf("enter b=");
	scanf("%d",&b);

	printf("enter c=");
	scanf("%d",&c);

	printf("enter d=");
	scanf("%d",&d);

	if (a==b && b==c && c==d)
	{
		printf("all value are same");
	}


	else if (a==b && c==d)
	{
		printf("a,b and c,d are same");
	}


	else if (a==d && b==c)
	{
		printf("a,d and b,c are same");
	}


	else if (a==c && b==d)
	{
		printf("a,c and b,d are same");
	}

	else if (a==b && b==c)
	{
		printf(" a,b and c are same");
	}


	else if (a==b && b==d)
	{
		printf("a,b and d are same");
	}

	else if (a==c && c==d)
	{
		printf("a,c and d are same");
	}


	else if (b==c && c==d)
	{
		printf("b,c and d are same");
	}

	else if (a==b)
	{
		printf("a and b are same");
	}


	else if (c==d)
	{
		printf("c and d are same");
	}


	else if (a==d)
	{
		printf("a and d are same");
	}


	else if (b==c)
	{
		printf("b and c are same");
	}


	else if (a==c)
	{
		printf("a and c are same");
	}


	else if (b==d)
	{
		printf("b and d are same");
	}

	else
	{
		if(a>b)
		{
			if (a>c)
			{
				if (a>d)
				{
					printf("a is max");
				}

				else
				{
					printf("d is max");
				}
			}

			else
			{
				if (c>d)
				{
					printf("c is max");
				}

				else
				{
					printf("d is max");
				}
			}
		}

		else
		{
			if (b>c)
			{
				if (b>d)
				{
					printf("b is max");
				}

				else
				{
					printf("d is max");
				}
			}

			else
			{
				if (c>d)
				{
					printf("c is max");
				}

				else
				{
					printf("d is max");
				}
			}
		}

	}

	getch();

}
