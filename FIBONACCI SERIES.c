#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("ENTER A NUMBER.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<2)
		{
			printf("%d\t",i);
		}
		else
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
	}
	return 0;
}

