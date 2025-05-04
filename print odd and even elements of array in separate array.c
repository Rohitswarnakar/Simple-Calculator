#include<stdio.h>
int main()
{
	int a[5],odd[5],even[5],i,ecount=0,oddcount=0;
	printf("enter 5 integers: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
	{
		even[ecount]=a[i];
		ecount++;
	}
		else
	{
		odd[oddcount]=a[i];
		oddcount++;
	}
	}
	printf("ODD ELEMENTS ARE:\n");
	for(i=0;i<oddcount;i++)
	{
		printf("%d\t",odd[i]);
	}
	printf("\nEVEN ELEMENTS ARE:\n");
	for(i=0;i<ecount;i++)
	{
		printf("%d\t",even[i]);
	}
	return 0;
}

