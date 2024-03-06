#include <stdio.h>
#define m printf
#define d scanf

main() 
{
    char n[100];
    
    m("Enter string: ");
    d("%s", n);

    int i;
    
    for (i=0; n[i]!='\0';i++)
	{
        if (i==0 || n[i-1] == ' ') 
		{
            if (n[i]>=97 && n[i]<=122)
                n[i]-=32; 
        } 
		else 
		{
            if (n[i]>=65 && n[i]<=90)
                n[i]+=32; 
        }
    }

    m("Title case: %s\n", n);
}

