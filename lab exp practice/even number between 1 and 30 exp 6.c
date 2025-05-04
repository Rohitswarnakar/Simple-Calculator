#include<stdio.h>
int main()
{
	int i;
	printf("ALL EVEN NUMBERS BETWEEN 1 TO 30 ARE:\n");
	for(i=1;i<=30;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
