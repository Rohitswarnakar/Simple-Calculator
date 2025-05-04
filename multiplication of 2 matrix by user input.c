#include<stdio.h>
int main()
{
	int c[3][4],a[3][2],b[2][4],i,j,k;
	printf("enter elements of matrix A of size 3x2:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix B of size 2x4:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//first two loop uses the size of c[row][column]
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)//k uses column of a or row of b because both are same.
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("the multiplication of matrix a and b is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
