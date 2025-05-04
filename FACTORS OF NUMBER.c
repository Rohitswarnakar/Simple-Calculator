#include<stdio.h>
int main()
{
	int f,n;
	printf("ENTER A NUMBER YOU WANT TO FIND THE FACTOR OF :");
	scanf("%d",&n);
	printf("FACTORS OF %d ARE : \n",n);
	for(f=1;f<=n;f++)
	{
		if(n%f==0)
		{
			printf("%d\n",f);
		}
	}
	return 0;
}
