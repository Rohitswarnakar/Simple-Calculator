#include<stdio.h>
int main()
{
	int n;
	printf("enter an integer.\n");
	scanf("%d",&n);
	if(n%5==0||n%7==0)
	{
		printf("YES %d is divisible by either 5 or 7.",n);
	}
	else 
	{
		printf("NO NOT DIVISIBLE.");
	}
	return 0;
}
