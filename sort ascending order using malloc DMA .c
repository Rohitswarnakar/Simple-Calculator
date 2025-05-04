#include<stdio.h>
void sort(int *a,int n);
int main()
{
	int*p,n,i;
	printf("enter number of integers to sort: \n");
	scanf("%d",&n);
	p= malloc(n*sizeof(int));
	printf("enter the %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	sort(p,n);
	printf("\n the sorted array is: \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
}
void sort(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		}
	}
}
