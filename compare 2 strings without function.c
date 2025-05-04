#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("ENTER FIRST STRING : ");
	gets(a);
	printf("ENTER SECOND STRING : ");
	gets(b);
	for (i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			printf("STRINGS ARE NOT SAME.");
			return 0;
		}
	}
	printf("STRINGS ARE SAME.");
	return 0;
}

