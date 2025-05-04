#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("ENTER THE INTEGERS TO FIND SUM OF GIVEN NUMBER OF CUBES:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i*i*i;
		i++;
	}
	printf("sum is %d",sum);		
	return 0;
}
