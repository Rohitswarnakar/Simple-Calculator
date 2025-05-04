#include<stdio.h>
int main()
{
	int n,on,i,rev=0,rem;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	on=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==on)
	{
		printf("%d is palindrome number.",on);
	}
	else
	{
		printf("%d is not a palindrome number.",on);
	}
	return 0;	
}
