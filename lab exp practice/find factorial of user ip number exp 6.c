#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("ENTER AN INTEGER :\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		f=f*i;
	}
	printf("FACTORIAL OF %d IS %d.",n,f);
	return 0;
}
