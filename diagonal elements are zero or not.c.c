#include <stdio.h>
int main() 
{
    int matrix[4][4];
    int i, j;
    // Input the matrix elements
    printf("Enter the elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) 
	{
        for (j = 0; j < 4; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check if diagonal elements are zero
    for (i = 0; i < 4; i++) 
	{
        if (matrix[i][i] != 0) 
		{
            printf("Not all diagonal elements are zero.\n");
            return 0; // Terminates the program immediately
        }
    }
    // If loop completes, all diagonal elements are zero
    printf("All diagonal elements are zero.\n");
    return 0;
}

