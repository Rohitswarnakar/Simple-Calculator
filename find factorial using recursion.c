#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("enter an integer to find the factorial of : \n");
	scanf("%d",&n);
	fact(n);
	printf("factorial of %d is %d",n,fact(n));
	return 0;
}
