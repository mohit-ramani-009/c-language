#include<stdio.h>
#define m printf
#define d scanf

main()
{
	char str[100];
	int len=0;
	
	char *p;
	p=&str;
	int *p1;
	p1=&len;
	p1=&len;
	
	m("Enter of the string elements is: ");
	gets(str);

	while(*p!='\0')
	{
		*p++;
		len++;
	}
	
	m("The length is string %d",*p1);

}

