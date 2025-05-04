#include<Stdio.h>
int main()
{
	int a[10],i,oc=0,ec=0;
	printf("enter 10 integers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	printf("ODD:%d\n",oc);
	printf("EVEN:%d\n",ec);
	return 0;
}

