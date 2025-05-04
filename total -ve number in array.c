#include<stdio.h>
int main()
{
	int a[5],i,count=0;
	printf("enter 5 integers: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		count++;
	}
	printf("the total number of -ve number is %d.",count);
	return 0;
}
