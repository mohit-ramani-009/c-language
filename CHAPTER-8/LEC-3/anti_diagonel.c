#include <stdio.h>
#define m printf
#define d scanf

main() 
{
    int b;
    
    m("Enter b: ");
    d("%d", &b);
    
    int array[b][b];
    int i, j;

    m("Enter array elements:\n");
    for (i = 0; i < b; i++) 
	{
        for (j = 0; j < b; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &array[i][j]);
        }
    }

    m("\nantidiagonal elements:\n");
    
    for (i = 0; i < b; i++) 
	{
        m("%d ", array[i][b - 1 - i]);
    }
    
}

