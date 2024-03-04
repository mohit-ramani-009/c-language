#include <stdio.h>
#define m printf
#define d scanf

main() 
{
	int n;
	
	m("enter n:- ");
	d("%d",&n);
	
    int array[n][n];

    m("Enter array elements:\n");
    
    int i,j;
    
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &array[i][j]);
        }
    }

    m("\nDiagonal elements:\n");
    
    for (i = 0; i < n; i++) 
	{
        m("%d ", array[i][i]);
    }
    
    m("\n");
}

