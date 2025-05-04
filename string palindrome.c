#include<stdio.h>
#include<string.h>
int main()
{
	char org[10],rev[10];
	printf("ENTER A STRING: ");
	scanf("%s",&org);
	strcpy(rev,org);
	strrev(rev);
	if (strcmp(org,rev)==0)
	{
		printf("%s string is palindrome.",org);
	}
	else
	{
		printf("%s string is not a palindrome.",org);
	}
	return 0;
}

