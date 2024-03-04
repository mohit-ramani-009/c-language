#include <stdio.h>
#define m printf
#define d scanf

main() 
{
	int n;
	
	m("enter n:- ");
	d("%d",&n);
	
    int array[n][n];
    int sum = 0;

    m("Enter array's elements:\n");
    
    int i,j;
    
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &array[i][j]);
        }
    }

    m("\nThe boundary elements:\n");
    
    m("\n");
    
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) 
			{
               m(" ");
            } 
			else 
			{
                m("%d ", array[i][j]);
                sum += array[i][j];
            }
        }
        m("\n");
    }

    m("\nThe sum of boundary elements of the array: %d\n", sum);
}

