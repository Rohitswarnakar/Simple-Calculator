#include<stdio.h>
int main()
{
	int count=0,n;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	if(n==0)
	{
		count=1;
	}
	else
	{
		while(n>0)
		{
			n=n/10;
			count++;
		}
	}
	printf("NUMBER OF DIGITS: %d\n",count);
return 0;
}

