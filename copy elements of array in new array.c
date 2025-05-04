#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("ENTER 5 INTEGER IN 1ST ARRAY.\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("INTEGER IN 2nd ARRAY are : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
