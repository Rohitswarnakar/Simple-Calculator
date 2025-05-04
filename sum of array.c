#include<stdio.h>
int main()
{
	int i,arr[5],sum=0;
	printf("ENTER 5 INTEGER.\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf(" sum is: %d",sum);
	return 0;
}
