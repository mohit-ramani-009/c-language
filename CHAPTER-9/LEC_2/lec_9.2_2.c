#include<stdio.h>
#define m printf
#define d scanf

main()
{
	char email[]="admin@gmail.com";
	char password[]="123456";

	char n[100];
	char s[100];
	
	m("enter your login email...");
	gets(n);
	
	m("enter your login password...");
	gets(s);
	
	if(strcmp(email,n)==0 && strcmp(password,s)==0)
	{
		m("logig successful...");
	}
	
	else
	{
		m("invalid credentials...");
	}	
}
