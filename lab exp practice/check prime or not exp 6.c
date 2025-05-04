#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("ENTER AN INTEGER: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	{
		printf("%d IS PRIME.",n);
	}
	else
	{
		printf("%d IS NOT PRIME.",n);
	}
	return 0;
}
