#include<stdio.h>
#include<string.h>
int main()
{
	char str[10]="hello",rev[10];
	strcpy(rev,str);
	strrev(rev);
	printf("%s\n",rev);
	printf("%d",strlen(str));
	return 0;
}
