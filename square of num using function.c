#include<stdio.h>
int square(int a)
{
	return a*a;
}
int main()
{
	int a;
	printf("enter a number you want to find the square of : ");
	scanf("%d",&a);
	printf("square of %d is %d",a,square(a));
	return 0;
}
