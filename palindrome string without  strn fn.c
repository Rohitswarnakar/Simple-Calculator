#include<stdio.h>
int main()
{
	char a[100],rev[100];
	int count=0,j=0,i;
	printf("enter a string: ");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		count++;
	}
	for (i=count-1;i>=0;i--)
	{
		rev[j]=a[i];
		j++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=rev[i])
		{
			printf("%s is not a palindrome.",a);
			return 0;
		}
	}
	printf("%s is a palindrome.",a);
	return 0;
}
	
