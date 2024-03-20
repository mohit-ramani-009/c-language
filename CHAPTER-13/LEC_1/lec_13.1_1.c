#include <stdio.h>

void main() 
{
    FILE *dummyptr;
    FILE *coppiedptr;
    
    char n;
    
    dummyptr = fopen("dummy.txt", "r");
    coppiedptr = fopen("coppied.txt", "w");
    
    if (dummyptr == NULL && coppiedptr == NULL)
	 {
        printf("Files can't open..\n");
        return 1;
		 
    }
    
	 else 
	 {
        printf("File created successfully..\n");
        
        while ((n = getc(dummyptr)) != EOF) 
		{
            putc(n,coppiedptr);
        }
        
        fclose(dummyptr);
        fclose(coppiedptr);
    }
}


