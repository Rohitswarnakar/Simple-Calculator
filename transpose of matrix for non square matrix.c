//for non square matrix.
#include<stdio.h>
int main()
{
	int arr[3][2]={4,2,5,3,6,8},trans[2][3],i,j;
	printf("the matrix to be transposed is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=arr[i][j];
		}
	}
	printf("the transposed matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}


