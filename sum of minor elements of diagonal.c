#include<stdio.h>
# define size 3
int main()
{
	int a[size][size],i,j,sum=0;
	printf("ENTER THE ELEMENTS OF A 3x3 MATRIX:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("THE MATRIX IS:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i+j==size-1)
			sum=sum+a[i][j];
		}
	}
	printf("SUM OF ELEMENTS OF MINOR DIAGONAL IS %d",sum);
	return 0;
}
