#include<stdio.h>
int main()
{
	int arr[5]={0,1,2,3,4},sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of all elements is %d",sum);
	return 0;
}
