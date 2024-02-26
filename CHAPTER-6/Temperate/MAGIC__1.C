#include<stdio.h>
#include<conio.h>

	int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
     {
	  sum += num % 10;
	  num /= 10;
     }
    return sum;
}

	int isMagicNumber(int num)
{
    while (num > 9)
    {
		num = sumOfDigits(num);
    }
    return (num == 1);
}

main()
{

    int number;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isMagicNumber(number))
	{
	printf("%d is not a magic number!\n", number);
    } else
	{
	printf("%d is a magic number.\n", number);
    }

    getch();
}
