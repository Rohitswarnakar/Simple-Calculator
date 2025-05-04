#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a,b;
	printf("ENTER TWO INTEGERS:\n");
	scanf("%d%d",&a,&b);
	printf("values before swapping is A:%d & B:%d\n",a,b);
	swap(&a,&b);
	printf("values after swapping is A:%d & B:%d\n",a,b);
	return 0;
}
