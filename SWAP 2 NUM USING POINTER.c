#include<stdio.h>
int main()
{
	int a,b,temp,*p,*q;
	printf("ENTER 1ST NUM. A = ");
	scanf("%d",&a);
	printf("ENTER 2ND NUM. B = ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("VALUES BEFORE SWAPPING:\n A = %d\n B = %d\n",a,b);
	temp=*p;
	*p=*q;
	*q=temp;
	printf("VALUES AFTER SWAPPING:\n A = %d\n B = %d",a,b);
	return 0;
}
