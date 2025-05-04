#include<stdio.h>
int main()
{
	int arr[3][3]={4,2,5,3,6,8,6,9,7},sum=0,i,j;
	printf("the matrix is : \n");
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
			if(i==j)
			sum=sum+arr[i][j];
		}
	}
	printf("sum of major diagonal is: %d",sum);
	return 0;
}
