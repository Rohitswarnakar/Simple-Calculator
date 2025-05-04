#include<stdio.h>
void sum(int a[10])
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of all elements of an array is %d",sum);
}
int main()
{
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	sum(b);
	return 0;
}
