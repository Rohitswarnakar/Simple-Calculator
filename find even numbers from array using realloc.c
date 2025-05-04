#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*p,n,i,n1;
	printf("ENTER THE NUMBER OF INTEGERS: ");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("MEMORY ALLOCATION FAILED!! \n");
		exit(1);
	}
	printf("\n ENTER %d integers: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("ENTER THE NUMBER OF INTEGERS YOU WANT TO ADD: \n");
	{
		scanf("%d",&n1);
	}
	n=n+n1;
	p=(int *)realloc(p,n*sizeof(int));
	if(p==NULL)
	{
		printf("MEMORY RE-ALLOCATION FAILED!! \n");
		exit(1);
	}
	printf("ENTER THE %d INTEGERS TO ADD INTO PREVIOUS DATA: \n",n1);
	for(i=n-n1;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("THE EVEN NUMBERS ARE: \n");
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
		{
			printf("%d\n",*(p+i));
		}
	}
	return 0;
}
