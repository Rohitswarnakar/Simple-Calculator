/*#include<stdio.h>
int main()
{
	int n,sum=0,count=0,i=1;
	printf("enter n: ");
	scanf("%d",&n);
	while(count<n)
	{
		printf("%d\n",i);
		sum=sum+i;
		i=i+2;
		count++;
	}
	printf("sum of first %d odd number is: %d",n,sum);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int n=1,i,x;
	printf("enter x:\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		printf("%d\n",n);
		n+=2;
	}
	return 0;
}
