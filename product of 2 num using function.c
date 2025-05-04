#include<stdio.h>
int product(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b;
	printf("ENTER 2 INTEGERS FOR PRODUCT:\n");
	scanf("%d%d",&a,&b);
	printf("product is %d",product(a,b));
	return 0;
}


