#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	printf("enter the string:\n ");
	scanf("%[^\n]",str);
	printf("LENGTH OF STRING IS %d",strlen(str));
	return 0;
}
