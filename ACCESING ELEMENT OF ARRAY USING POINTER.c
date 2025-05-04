#include<stdio.h>
int main()
{
	int a[5],i,*p;
	printf("ENTER 5 INTERGERS:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("ALL 5 INTERGERS ARE:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;	
}
