#include<stdio.h>
void printarray(int*p)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p+i));
	}
}
int main()
{
	int j,a[5];
	printf("ENTER 5 INTEGERS : \n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[j]);
	}
	printf("the elements of this array are: \n");
	printarray(a);
	return 0;
}
