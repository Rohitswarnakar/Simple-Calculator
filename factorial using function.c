#include<stdio.h>
int factorial(int n)
{
	int i,f=1;
	for (i=n;i>0;i--)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,p;
	printf("ENTER A NUMBER U WANT TO FIND THE FACTORIAL OF : ");
	scanf("%d",&n);
	p=factorial(n);
	printf("factorial of %d is %d",n,p);
	return 0;
}
