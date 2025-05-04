#include<stdio.h>
int main()
{
	int n;
	printf("enter an integer: ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is zero.",n);
	}
	else if(n%2==0)
	{
		printf("%d is an even number.",n);
	}
	else 
	{
		printf("%d is an odd number.",n);
	}
	return 0;
}
