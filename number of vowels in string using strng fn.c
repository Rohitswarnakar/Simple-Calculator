#include<stdio.h>
#include<string.h>
int main()
{
	char v[]="aeiouAEIOU",a[100];
	int i,count=0;
	printf("enter a string: ");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(strchr(v,a[i]))
		count++;
	}
	printf("number of vowels in %s is %d.",a,count);
	return 0;
}

