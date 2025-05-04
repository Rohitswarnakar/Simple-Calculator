#include<stdio.h>
int main()
{
	int a[5],rev[5],i,j=0,count=0;
	printf("enter 5 integer:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		rev[j]=a[i];
		j++;
	}
	printf("reverse of the array is: \n");
	for(j=0;j<5;j++)
	{
		printf("%d\t",rev[j]);
	}
	return 0;
}
