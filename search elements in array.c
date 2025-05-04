#include<stdio.h>
int main()
{
	int arr[5]={5,1,2,3,4},i,s;
	printf("enter the element you want to search : ");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(arr[i]==s)
		{
			printf("the element %d is in the index %d",s,i);
			return 0;
		}
	}
	printf("the element %d is not in the array.",s);
	return 0;
}
