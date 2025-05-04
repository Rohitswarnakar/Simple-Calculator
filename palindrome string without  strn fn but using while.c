#include<stdio.h>
int main()
{
	char a[100];
	int count=0,j ,i;
	printf("enter a string: ");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		count++;
	}
	j=count-1;
	i=0;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			printf("%s is not a palindrome.",a);
			return 1;
		}
		i++;
		j--;
	}
	printf("%s is a palindrome.",a);
	return 0;
}
