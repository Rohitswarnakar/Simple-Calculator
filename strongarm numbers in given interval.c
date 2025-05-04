#include<stdio.h>
#include<math.h>
void arm(int l,int u)   // l for lower limit and u for upper limit.
{
	int temp,n,count,p,sum,i;
	printf("armstrong numbers between %d to %d are:\n",l,u);
	for(i=l;i<=u;i++)
	{
		temp=i;
		count=0;
		while(temp>0)    //counting the number of digits for using it as power.
		{
			temp=temp/10;
			count++;
		}
		p=count; // we got value of power here .
		sum=0;
		temp=i;
		while(temp>0)
		{
			sum=sum+(int)pow(temp%10,p); 
			temp=temp/10;
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
	arm(l,u);
	return 0;
}
