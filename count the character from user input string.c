#include<stdio.h>
int main()
{
	char arr[40];
	int i,count=0;
	printf("ENTER TRIBHUVAN UNIVERSITY AS INPUT. \n");
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='I'||arr[i]=='i')
		count++;
	}
	printf("THE CHARACTER 'I' OCCURED %d TIMES.",count);
	return 0;
}
