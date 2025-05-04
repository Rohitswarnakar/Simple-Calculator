#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter an integers: \n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation failed!!.");
		return 1;
	}
	printf("enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("the elements you entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p);
	return 0;
	
}
