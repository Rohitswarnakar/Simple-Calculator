#include<stdio.h>
int main()
{
	int q,rem,divi,dvs;
	printf("ENTER A DIVIDEND: ");
	scanf("%d",&divi);
	printf("ENTER A DIVISOR: ");
	scanf("%d",&dvs);
	if(dvs==0)
	{
		printf("INVALID DIVISOR.");
	}
	else
	{
		rem=divi%dvs;
		printf("THE REMAINDER IS %d\n",rem);
		q=divi/dvs;
		printf("THE QUOTIENT IS %d",q);
	}
	return 0;
}
