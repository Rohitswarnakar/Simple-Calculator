#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st integer: \n");
	scanf("%d",&a);
	printf("enter 2nd integer: \n");
	scanf("%d",&b);
	printf("enter 3rd integer: \n");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("%d is largest.",a);
	}
	else if(b>c)
	{
		printf("%d is largest.",b);
	}
	else
	{
		printf("%d is largest.",c);
	}
	return 0;
}

