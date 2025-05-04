#include<stdio.h>
int main()
{
	float a,b,*p,*q;
	printf("ENTER 1ST NUMBER.\n");
	scanf("%f",&a);
	printf("ENTER 2ND NUMBER.\n");
	scanf("%f",&b);
	p=&a;
	q=&b;
	printf("SUM OF %.2f AND %.2f IS %.2f",a,b,*p+*q);
	return 0;
}
