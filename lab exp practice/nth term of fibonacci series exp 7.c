#include<stdio.h>
int main()
{
	int a=0,b=1,i,c,n;
	printf("ENTER THE TERM : ");
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
