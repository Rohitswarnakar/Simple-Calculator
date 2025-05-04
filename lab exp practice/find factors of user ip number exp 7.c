#include<stdio.h>
int main()
{
	int n,i;
	printf("ENTER AN INTEGER : ");
	scanf("%d",&n);
	printf("FACTORS OF %d ARE: \n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
	return 0;
}
