#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,-1,-3,-8};
	int i;
	printf("the negative elements of an array are: \n");
	for(i=0;i<6;i++)
	{
		if(arr[i]<0)
		{
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
