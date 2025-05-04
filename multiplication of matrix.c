#include<stdio.h>
int main()
{
	int c[3][4],a[3][2]={1,2,3,4,5,6},b[2][4]={2,4,6,8,10,12,14,16},i,j,k;
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
