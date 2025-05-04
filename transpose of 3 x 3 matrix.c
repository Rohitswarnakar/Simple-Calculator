
//WE CAN USE THE SWAPPIG TECHNIQYE AS WELL TO AVOID THE EXTRA ARRAY TRANS[3][3]
//AND USE TEMP AS TEMPORARY VARIABLE AND USE IT FOR SWAPPINH.

#include<stdio.h>
int main()
{
	int arr[3][3],trans[3][3],i,j;
	printf("enter the matrix you wnat to find the transpose of: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("THE MATRIX TO BE TRANSPOSED IS :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[j][i]=arr[i][j];
		}
	}
	printf("THE MATRIX AFTER TRANSPOSING IS :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
