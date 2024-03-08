#include<stdio.h>
#define m printf
#define d scanf

main()
{
	char pass[20];
	
	int i,fl=0,sy=0,num=0,sy2=0,sy3=0,lpass;
	
	m("Enter Your Password : ");
	gets(pass);
	
	lpass = strlen(pass);
	
	for(i=0;i<lpass;i++)
	{
		if(pass[i] >= 65 && pass[i] <= 90)
		{
			fl=1;
		}
		
		else if(pass[i] >= 48 && pass[i] <= 57)
		{
			num = 1;
		}
		
		else if(pass[i] >= 33 && pass[i] <= 47)
		{
			sy=1;
		}
		
		else if(pass[i]>=123 && pass[i]<=126)
		{
			sy2=1;
		}
		
		else if(pass[i]>=91 && pass[i]<=96)
		{
			sy3=1;
		}		
	}
	
	
		if( fl==1 && num ==1 && (sy ==1 || sy2 ==1 || sy3==1))
		{
			m("Your Password Is strong...");
		}
		
		else
		{
			m("Your password Is Not Strong...");
		}
}
