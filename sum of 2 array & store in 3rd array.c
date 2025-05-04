#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("ENTER 5 INTEGERS FOR 1ST ARRAY:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER 5 INTEGERS FOR 2nd ARRAY:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("SUM OF BOTH ARRAY IS :\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}
	return 0;
}
