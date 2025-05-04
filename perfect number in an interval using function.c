// FINDING PERFECT NUMBER BETWEEN THE GIVEN INTERVAL.

#include<stdio.h>
void perfect(int l,int u)
{
	int sum,i,j;
	printf("perfect numbers between %d to %d are:\n",l,u);
	for(i=l;i<=u;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
    	if(sum==i)
		{
			printf("%d\n",i);
		}	
	}	
}
int main()
{
	int l,u;
	printf("enter lower limit:\n");
	scanf("%d",&l);
	printf("enter upper limit:\n");
	scanf("%d",&u);
	perfect(l,u);
	return 0;
}
