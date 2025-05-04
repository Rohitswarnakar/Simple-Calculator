#include<stdio.h>
int main()
{
	int arr[3]={1,2,3},*p;
	p=arr;
	printf("FIRST ELEMENT IS %d\n",*p);
	p++;
	printf("second element is %d\n",*p);
	p++;
	printf("THIRD element is %d\n",*p);
	return 0;	
}
