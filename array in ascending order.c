#include<stdio.h>
int main()
{
	int arr[5],i,j,temp;
	printf("enter 5 elements in this array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);		
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				 temp = arr[j];
                arr[j] = arr[j + 1];
				 arr[j + 1] = temp;
			}
		}
	}
	printf("the numbers in an ascending order is: \n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
