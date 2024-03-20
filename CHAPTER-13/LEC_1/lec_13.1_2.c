#include<stdio.h>

main()
{
	int i;
	
	FILE *fileptr;
	
	fileptr= fopen("file.txt","w");
	
	if(fileptr==NULL)
	{
		printf("File can't open..");
		
	}
	
	else
	{
		printf("File open successful...");
		
		for(i=1;i<=50;i++)
		{
			if(i%3==0 && i%5==0)
			{
				fprintf(fileptr,"Divisible by 3 and 5 is:%d\n",i);
			}
		}
		
	}
	fclose(fileptr);
}

