#include<stdio.h>
int fact(int n)
{
	if(n==1||n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("ENTER AN INTEGER: \n");
	scanf("%d",&n);
	printf("FACTORIAL OF %d IS:%d \n",n,fact(n));
	return 0;
}
