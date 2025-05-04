#include<stdio.h>
void swap(int *p,int *q);
int main()
{
	int a,b;
	printf("ENTER 1ST INTEGER:\n");
	scanf("%d",&a);
	printf("ENTER 2ND INTEGER:\n");
	scanf("%d",&b);
	printf("VALUES BEFORE SWAPPING A=%d & B=%d\n",a,b);
	swap(&a,&b);
	printf("VALUES AFTER SWAPPING A=%d & B=%d",a,b);
	return 0;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

