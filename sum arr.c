#include<stdio.h>
int main()
{
	float arr[4] = {1,1,1,1};
	float sum=0,avg;
	int i;
	for(i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/4;
	printf("sum is: %.2f",sum);
	printf("\naverage is: %.2f",avg);
	return 0;
}

