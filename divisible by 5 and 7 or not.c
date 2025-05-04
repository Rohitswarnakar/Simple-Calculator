#include<stdio.h>
int main()
{
	int n;
	printf("enter an integer: \n");
	scanf("%d",&n);
	if(n%5==0)
	{
		if(n%7==0)
		{
			printf("%d is divisible by 5 and 7.",n);
		}
		else
		{
			printf("%d is only divisible by 5 but not by 7.",n);
		}
	}
	else if(n%7==0)
	{
		printf("%d is only divisible ny 7 but not by 5.",n);
	}
	else
	{
		printf("%d is neither divisible by 5 nor by 7.",n);
	}
	return 0;
}
