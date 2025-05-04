#include<stdio.h>
int main()
{
	char str[]="nepal";
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
		}
	}
	printf("the no of vowels in %s is %d",str,count);
	return 0;
}
