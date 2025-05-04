#include<stdio.h>
void increasearray(int A[10]);
int main()
{
	int A[10],i;
	printf("enter 10 integers: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	increasearray(A);
	printf("every elements of an array are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
void increasearray(int *A)
{
	int i;
	for(i=0;i<10;i++)
	{
		A[i]=A[i]+20;
	}
}
