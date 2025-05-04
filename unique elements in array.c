#include <stdio.h>
int main()
{
	int arr[5], i, j, count;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
	{
        scanf("%d", &arr[i]);
    }
    printf("Unique elements in the array: ");
    for (i = 0; i < 5; i++) 
	{
		count=0;
        for (j = 0; j < 5; j++)
		{
        	if (arr[i] == arr[j]) 
			{
                count++;
            }
        }
        if (count == 1) 
		{
            printf("%d ", arr[i]);
        }
    }
  return 0;
}

