#include<stdio.h>
#include<math.h>
int main()
{
	int temp,n,count=0,sum=0;
	printf("enter a number.");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
    temp=n;
	while(temp>0)
	{
		sum=sum+(int)pow(temp%10,count);
		temp=temp/10;
	}
	if(sum==n)
	{
	printf("%d is an armstrong number.",n);
	}
	else
	
	{
		printf("%d is not an armstrong.",n);
	}
	return 0;
}

