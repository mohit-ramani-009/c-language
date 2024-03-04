#include <stdio.h>
#define m printf
#define d scanf

main() 
{
    int row, col;

  
    m("Enter the row size: ");
    d("%d", &row);
    
    m("Enter the column size: ");
    d("%d", &col);

    int A[row][col], B[row][col], C[row][col];
    
    int i,j;

    m("\nEnter array A's elements:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            m("a[%d][%d] = ", i, j);
            d("%d", &A[i][j]);
        }
    }

  
    m("\nEnter array B's elements:\n");
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            m("b[%d][%d] = ", i, j);
            d("%d", &B[i][j]);
        }
    }

   
    m("\nArray C is:\n");
    
    for (i = 0; i < row; i++) 
	{
        for (j = 0; j < col; j++) 
		{
            C[i][j] = A[i][j] + B[i][j];
            m("%d\t", C[i][j]);
        }
        m("\n");
    }
}

