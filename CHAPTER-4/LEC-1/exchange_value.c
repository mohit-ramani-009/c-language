#include<stdio.h>
main()
{
	int a=10;
	int b=20;
	int c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}
