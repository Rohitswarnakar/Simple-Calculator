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
	rev[count]='\0';
	for (i=count-1;i>=0;i--)
	{
		rev[j]=a[i];
		j++;
	}
	printf("Reverse of a %s is %s .",a,rev);
	return 0;
}
