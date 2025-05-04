#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter an integer : \n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	printf("sum of given number of squares is %d",sum);
	return 0;
}

//using power function


/*#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1,sum=0;
	printf("ENTER AN INTEGER: ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+(int)pow(i,2);
		i++;
	}
	printf("sum of given number of squares is %d",sum);
	return 0;
}*/
