#include<stdio.h>
int main()
{
	int n,ON,rev=0,rem;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	ON=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(ON==rev)
	{
		printf("%d IS A PALINDROME NUMBER.",ON);
	}
	else
	{
		printf("%d IS NOT A PALINDROME NUMBER.",ON);
	}
	return 0;
}
