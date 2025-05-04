#include<stdio.h>
int main()
{
	int i,count=0;
	char str[100];
	printf("enter a line of text.\n");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;		
	}
	printf("number of vowel in '%s' is %d",str,count);
	return 0;
}
