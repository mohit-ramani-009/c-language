#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	int c=a+b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=c-a;
	b=c-b;
	printf("a=%d\n",a);
	printf("b=%d",b);
	return 0;
}
