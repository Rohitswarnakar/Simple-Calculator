#include<stdio.h>
int reverse(int n,int rev)
{
	if(n==0)
	return rev;
	else
	return reverse(n/10,rev*10+n%10);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=reverse(a,0);
	printf("reverse of a %d is %d",a,b);
	return 0;
}
