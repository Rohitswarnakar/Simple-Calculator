#include <stdio.h>
int main() 
{
    int *arr, n, i;
    int evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr=calloc(n, sizeof(int));
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", arr + i);
    }
    for (i = 0; i < n; i++) 
	{
        if (*(arr + i) % 2 == 0) 
		{
            evenCount++;
        } 
		else 
		{
            oddCount++;
        }
    }
    printf("\nTotal Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);
    return 0;
}

