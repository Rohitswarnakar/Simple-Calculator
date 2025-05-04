#include<stdio.h>
#define size 100
int main()
{
	int a[size],n,i,sum=0;
	float avg;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	if (n > size || n <= 0)
	{
        printf("Invalid size! Must be between 1 and %d.\n", size);
        return 1;
    }

	printf("enter %d elements of an array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("SUM IS %d",sum);
	printf("\nAVG IS %.2f",avg);
	return 0;
}
