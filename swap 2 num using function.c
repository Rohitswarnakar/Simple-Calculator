#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("values after swapping is A:%d & B:%d",a,b);
}
int main()
{
	int a,b;
	printf("enter two integers:\n");
	scanf("%d%d",&a,&b);
	printf("values before swapping is A:%d & B:%d\n",a,b);
	swap(a,b);
	return 0;
}
