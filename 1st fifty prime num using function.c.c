#include <stdio.h>
int isPrime(int n)
{
	int i;
	if(n<=1)
	return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int count=0,num=2;
	printf("First 50 prime numbers:\n");
	while(count<50)
	{
		if(isPrime(num))
		{
			printf("%d\n",num);
			count++;
		}
		num++;
	}
//	printf("\n");
	return 0;
}
